# 485. Max Consecutive Ones

## 📌 Problem Statement

Given a binary array `nums`, return the **maximum number of consecutive `1`s** in the array.

---

## 💡 Approach

We can solve this problem using a simple **linear traversal**.

Maintain two variables:

* `ctr` — stores the current count of consecutive `1`s.
* `max1` — stores the maximum count found so far.

While traversing the array:

1. If the current element is `1`, increment `ctr`.
2. Update `max1` if `ctr` becomes greater than the previous maximum.
3. If the current element is `0`, reset `ctr` to `0`.
4. Return `max1` after traversing the entire array.

---

## 🧠 Algorithm

1. Initialize `max1 = 0` and `ctr = 0`.
2. Traverse the array from left to right.
3. For every element:

   * If `arr[i] == 1`, increment `ctr`.
   * Update `max1`.
   * Otherwise, reset `ctr = 0`.
4. Return `max1`.

---

## 🔍 Example

### Input

```text
nums = [1, 1, 0, 1, 1, 1]
```

### Traversal

```text
1 → count = 1
1 → count = 2
0 → count = 0
1 → count = 1
1 → count = 2
1 → count = 3
```

The maximum consecutive `1`s is `3`.

### Output

```text
3
```

---

## ⏱️ Complexity Analysis

Let `n` be the size of the array.

### Time Complexity

The array is traversed exactly once.

**O(n)**

### Space Complexity

Only a few variables are used.

**O(1)**

## 🎯 Key Takeaways

* This is a **single-pass array traversal** problem.
* Resetting the counter whenever `0` is encountered is the key idea.
* No extra data structures are required.
* The solution achieves optimal **O(n) time** and **O(1) space** complexity.
