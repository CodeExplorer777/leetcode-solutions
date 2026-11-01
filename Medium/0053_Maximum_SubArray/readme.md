# 53. Maximum Subarray

## 📌 Problem Statement

Given an integer array `nums`, find the subarray with the largest sum and return its sum.

A **subarray** is a contiguous, non-empty sequence of elements within an array.

---

## 💡 Approach

The solution uses **Kadane's Algorithm**, an efficient approach to finding the maximum subarray sum in a single traversal.

We maintain two variables:

- `sum` — stores the sum of the current subarray.
- `maxi` — stores the maximum subarray sum found so far.

### 1. Initialize Variables

Initialize:

- `sum = 0`
- `maxi = INT_MIN`

Using `INT_MIN` ensures that arrays containing only negative numbers are handled correctly.

### 2. Calculate the Current Sum

Traverse the array and add each element to `sum`.

```text
sum = sum + nums[i]
```

Update `maxi` whenever the current sum is greater than the previous maximum.

### 3. Reset Negative Running Sum

If the current sum becomes negative, reset it to zero.

```text
sum = max(sum, 0)
```

**Why?**

A negative running sum will only decrease the sum of any future subarray. Therefore, it is better to discard it and start a new subarray.

### 4. Return the Maximum Sum

After traversing the entire array, return `maxi`.

---

## 🧠 Algorithm

1. Initialize `maxi = INT_MIN` and `sum = 0`.
2. Traverse the array from left to right.
3. Add the current element to `sum`.
4. Update `maxi = max(sum, maxi)`.
5. If `sum` becomes negative, reset it to zero.
6. Continue until all elements are processed.
7. Return `maxi`.

---

## 🔍 Example

### Input

```text
nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

### Traversal

| Element | Current Sum | Maximum Sum |
|---:|---:|---:|
| -2 | 0 (reset) | -2 |
| 1 | 1 | 1 |
| -3 | 0 (reset) | 1 |
| 4 | 4 | 4 |
| -1 | 3 | 4 |
| 2 | 5 | 5 |
| 1 | 6 | 6 |
| -5 | 1 | 6 |
| 4 | 5 | 6 |

The maximum subarray is:

```text
[4, -1, 2, 1]
```

Its sum is:

```text
4 + (-1) + 2 + 1 = 6
```

### Output

```text
6
```

---

## ⏱️ Complexity Analysis

Let `n` be the size of the array.

### Time Complexity

**O(n)** — The array is traversed exactly once.

### Space Complexity

**O(1)** — Only two variables are used to maintain the running sum and maximum sum.

---

## 🎯 Key Takeaways

- Kadane's Algorithm efficiently solves the Maximum Subarray problem.
- A negative running sum is discarded because it cannot improve a future subarray.
- Always update the maximum sum before resetting the current sum.
- Initializing `maxi` with `INT_MIN` handles arrays containing only negative numbers.
- The solution achieves **O(n) time and O(1) extra space**.
