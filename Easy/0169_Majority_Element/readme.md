# 169. Majority Element

## 📌 Problem Statement

Given an array `nums` of size `n`, return the **majority element**.

The majority element is the element that appears more than \(\lfloor n/2 \rfloor\) times in the array.

The problem guarantees that a majority element exists.

---

## 💡 Approach

The solution uses the **Boyer–Moore Voting Algorithm**, which finds the majority element in linear time using constant extra space.

We maintain two variables:

- `elem` — the current candidate for the majority element.
- `ctr` — the counter representing the candidate's current vote balance.

### 1. Initialize the Candidate

Initially, select the first element as the candidate and initialize the counter.

### 2. Traverse the Array

For each element:

- If it matches `elem`, increment `ctr`.
- Otherwise, decrement `ctr`.

This effectively cancels out different elements against the current candidate.

### 3. Update the Candidate

When `ctr` becomes zero, select a new candidate from the next element.

The majority element occurs more than half the time, so it cannot be completely eliminated by pairing it with different elements.

### 4. Return the Result

After processing the array, return the majority element candidate.

---

## 🧠 Algorithm

1. Initialize `elem` with the first array element.
2. Initialize `ctr = 0`.
3. Traverse the array from left to right.
4. If the current element equals `elem`, increment `ctr`; otherwise, decrement it.
5. If `ctr == 0`, update `elem` to the next element.
6. Return `elem` after completing the traversal.

---

## 🔍 Example

### Input

```text
nums = [2, 2, 1, 1, 1, 2, 2]
```

### Explanation

The majority element is `2`, which appears four times out of seven elements.

Since:

```text
floor(7 / 2) = 3
```

and `2` appears more than three times, it is the majority element.

### Output

```text
2
```

---

## ⏱️ Complexity Analysis

Let `n` be the size of the array.

### Time Complexity

**O(n)** — The array is traversed once.

### Space Complexity

**O(1)** — Only a candidate and a counter are maintained.

---

## 🎯 Key Takeaways

- The Boyer–Moore Voting Algorithm efficiently finds the majority element.
- Matching elements increase the vote counter, while different elements decrease it.
- The majority element survives the cancellation process because it occurs more than half the time.
- The algorithm achieves **O(n) time and O(1) extra space**.

---

## ⚠️ Implementation Note

The candidate update in the provided code uses `nums[i + 1]`. If the counter becomes zero at the last index, this can access an out-of-bounds element.

A safer implementation updates the candidate when the counter reaches zero **before processing the next element**, or uses the standard Boyer–Moore pattern: initialize `ctr = 0`, select the current element as the candidate whenever `ctr == 0`, and then increment or decrement the counter.
