# 1872. Stone Game VIII

## 📌 Problem Statement

Alice and Bob play a game using an array of stones.

They take turns choosing an index `i` and removing the first `i` stones from the array. The sum of those removed stones is added to the player's score.

The game continues until only one stone remains.

Both players play optimally, and the goal is to maximize the difference between their scores.

Return the maximum possible score difference that Alice can achieve over Bob.

---

## 💡 Approach

The solution uses **Prefix Sum + Dynamic Programming**.

### 1. Prefix Sum

First, calculate the prefix sum of the array.

`prefixSum[i]` represents the sum of all stones from index `0` to `i`.

This allows us to quickly calculate the score obtained when the first `i + 1` stones are taken.

---

### 2. Dynamic Programming

Define:

```text
t[i] = maximum score difference that the current player can achieve
       when considering the prefix ending at index i
```

The last state is initialized as:

```text
t[n - 1] = prefixSum[n - 1]
```

For every position from `n - 2` down to `1`, there are two choices.

### Take

The current player takes the prefix ending at `i`.

The resulting score difference is:

```text
prefixSum[i] - t[i + 1]
```

The subtraction is required because after the current player makes a move, the opponent becomes the current player in the next state.

### Skip

The player does not choose the current prefix and keeps the result from the next state:

```text
t[i + 1]
```

Therefore:

```text
t[i] = max(prefixSum[i] - t[i + 1], t[i + 1])
```

Finally, the answer is:

```text
t[1]
```

because the game requires at least two stones to be considered before the final state.

---

## 🧠 Algorithm

1. Calculate the prefix sum of the `stones` array.
2. Create a DP array `t`.
3. Initialize the final DP state using the total sum of all stones.
4. Traverse the array backwards from `n - 2` to `1`.
5. For every position:

   * Calculate the result if the current prefix is taken.
   * Calculate the result if it is skipped.
   * Store the maximum of the two choices.
6. Return `t[1]`.

---

## 🔍 Example

### Input

```text
stones = [-1, 2, -3, 4, -5]
```

The prefix sums are:

```text
[-1, 1, -2, 2, -3]
```

The DP evaluates the possible choices from the end of the array while considering optimal play from both players.

The final DP state gives the maximum score difference Alice can achieve.

---

## ⏱️ Complexity Analysis

Let `n` be the number of stones.

### Time Complexity

* Calculating prefix sums: **O(n)**
* Filling the DP array: **O(n)**

Overall:

**O(n)**

### Space Complexity

Two arrays of size `n` are used:

* Prefix sum array
* DP array

Overall:

**O(n)**

---

## 🎯 Key Takeaways

* Prefix sums allow efficient calculation of the score obtained from taking a prefix.
* Dynamic programming is used to model the optimal decisions of both players.
* The game can be viewed as a sequence of **take vs. skip** decisions.
* The opponent's optimal result is subtracted because the game alternates turns.
* The solution achieves **O(n) time complexity** with **O(n) extra space**.
