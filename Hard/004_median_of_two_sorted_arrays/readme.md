# Median of Two Sorted Arrays

**LeetCode Problem #4**  
**Difficulty:** Hard  
**Language:** Java  
**Topic:** Arrays, Two Pointers  
**Link:** https://leetcode.com/problems/median-of-two-sorted-arrays/

---

## 🧩 Problem Statement

Given two sorted integer arrays `nums1` and `nums2`, return the **median** of the combined sorted array.

---

## 💡 Approach Used (Merge Technique)

This solution follows a **merge-based approach**, similar to the merge step in **Merge Sort**.

### Steps:
1. Create a new array `sort` of size `n1 + n2`
2. Use two pointers:
   - `i` for `nums1`
   - `j` for `nums2`
3. Compare elements and insert the smaller one into `sort`
4. Copy remaining elements from either array
5. Calculate the median from the merged array:
   - If total length is even → average of two middle elements
   - If odd → middle element

---

## ✏️ Code Logic Explanation

- Two pointers traverse both arrays simultaneously
- Elements are merged in ascending order
- Final merged array is fully sorted
- Median is calculated using index arithmetic

---

## 🧪 Example

**Input:**
nums1 = [1, 3]
nums2 = [2]

**Merged Array:**
[1, 2, 3]

**Output:**
2.0


---

## ⏱️ Time & Space Complexity

| Metric | Value |
|------|------|
| Time Complexity | **O(n1 + n2)** |
| Space Complexity | **O(n1 + n2)** |

---

## ⚠️ Note on Optimization

- This solution is **correct and easy to understand**
- However, it does **not meet the required O(log(m+n)) constraint**
- A binary search–based approach can be used for optimal performance

---

## ✅ Conclusion

- Ideal for understanding array merging
- Good baseline solution before learning optimized techniques
- Clear, readable, and interview-explainable

---

⭐ *Solved using merge-based array technique.*

