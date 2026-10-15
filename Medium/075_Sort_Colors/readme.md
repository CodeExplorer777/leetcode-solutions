# 75. Sort Colors

## 📌 Problem Statement

Given an integer array `nums` containing `0`, `1`, and `2`, sort the array in-place so that elements of the same color are adjacent and arranged in the order:

- `0` → Red
- `1` → White
- `2` → Blue

The solution must sort the array **without using a library sorting function**.

---

## 💡 Approach

The solution uses the **Dutch National Flag Algorithm**, which sorts the array in a single traversal using three pointers.

We maintain three pointers:

- `left` — boundary for placing `0`s.
- `mid` — pointer that examines the current element.
- `high` — boundary for placing `2`s.

### 1. If `nums[mid] == 0`

Swap `nums[mid]` with `nums[left]`, then increment both `left` and `mid`.

This places `0` in its correct position.

### 2. If `nums[mid] == 1`

Increment `mid` because `1` already belongs in the middle section.

### 3. If `nums[mid] == 2`

Swap `nums[mid]` with `nums[high]`, then decrement `high`.

Do not increment `mid` here because the swapped element has not yet been examined.

---

## 🧠 Algorithm

1. Initialize `left = 0`, `mid = 0`, and `high = n - 1`.
2. Continue while `mid <= high`.
3. Check the element at `nums[mid]`:
   - If it is `0`, swap it with `nums[left]` and increment both pointers.
   - If it is `1`, increment `mid`.
   - If it is `2`, swap it with `nums[high]` and decrement `high`.
4. Stop when `mid > high`.
5. The array is now sorted in-place.

---

## 🔍 Example

### Input

```text
nums = [2, 0, 2, 1, 1, 0]
```

### Output

```text
[0, 0, 1, 1, 2, 2]
```

### Explanation

The algorithm partitions the array into three sections during traversal:

- All `0`s are moved toward the beginning.
- All `1`s remain in the middle.
- All `2`s are moved toward the end.

The three pointers maintain these sections without requiring an additional array.

---

## ⏱️ Complexity Analysis

Let `n` be the number of elements in `nums`.

### Time Complexity

**O(n)** — Each element is processed in a single traversal.

### Space Complexity

**O(1)** — Sorting is performed in-place using only three pointers.

---

## 🎯 Key Takeaways

- The Dutch National Flag Algorithm efficiently sorts arrays containing three distinct values.
- Three pointers manage the positions of `0`, `1`, and `2`.
- When swapping with `high`, do not increment `mid` because the incoming element must be examined.
- No additional array or built-in sorting function is required.
- The solution achieves **O(n) time and O(1) extra space**.
