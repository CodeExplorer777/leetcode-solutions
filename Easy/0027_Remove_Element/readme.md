# LeetCode 27 – Remove Element

## 📌 Problem Statement
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` **in-place** and return the new length of the array.

The relative order of the elements may be changed.  
Do not allocate extra space for another array — the operation must be done with **O(1)** extra memory.

---

## 🧠 Approach (Two Pointer Technique)

We use a **two-pointer approach**:

- Pointer `i` traverses each element in the array.
- Pointer `k` keeps track of the index where the next valid (non-`val`) element should be placed.

### Steps:
1. Initialize `k = 0`
2. Traverse the array using `i`
3. If `nums[i]` is **not equal** to `val`:
   - Assign `nums[k] = nums[i]`
   - Increment `k`
4. After traversal, `k` represents the number of valid elements

---

## ✨ Example

### Input
