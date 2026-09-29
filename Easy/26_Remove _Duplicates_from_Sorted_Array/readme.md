# 26. Remove Duplicates from Sorted Array

## 📌 Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** so that each unique element appears only once.

Return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique values in their original sorted order.

---

## 💡 Approach

The solution uses the **Two Pointer** technique.

Since the array is already sorted, all duplicate values are located next to each other.

We maintain two pointers:

* `i` → points to the position of the **last unique element**.
* `j` → scans through the array to find the next unique element.

### 1. Initialize the Pointers

Start with:

```text
i = 0
j = 1
```

The first element is always unique, so `i` starts at index `0`.

### 2. Find Unique Elements

For every position `j`:

* If `nums[i] == nums[j]`, the current element is a duplicate, so we simply continue.
* If `nums[i] != nums[j]`, a new unique element has been found.

Place this new element at the position immediately after the previous unique element and move `i` forward.

### 3. Return the Count

After processing the entire array, the number of unique elements is:

```text
i + 1
```

---

## 🧠 Algorithm

1. Set `i = 0`.
2. Traverse the array using `j` from index `1`.
3. Compare `nums[j]` with `nums[i]`.
4. If they are different:

   * Increment `i`.
   * Copy `nums[j]` to `nums[i]`.
5. Continue until `j` reaches the end of the array.
6. Return `i + 1`.

---

## 🔍 Example

### Input

```text
nums = [1, 1, 2, 2, 2, 3, 3]
```

During the traversal, the unique elements are identified as:

```text
1 → 2 → 3
```

The array is modified in-place so that its beginning becomes:

```text
[1, 2, 3, ...]
```

The number of unique elements is:

```text
3
```

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

No additional data structure is used.

**O(1)**

---

## 🎯 Key Takeaways

* The array is **sorted**, which makes the Two Pointer approach possible.
* Duplicate elements can be detected by comparing the current element with the last unique element.
* The array is modified **in-place** without using an additional array or set.
* `i` keeps track of the position where the next unique element should be placed.
* The solution achieves optimal **O(n) time** and **O(1) extra space**.
