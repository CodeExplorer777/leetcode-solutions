# 🔍 LeetCode 35 – Search Insert Position

## 📘 Problem Statement

Given a sorted array of distinct integers and a target value, return the index if the target is found.

If the target is not found, return the index where it would be inserted in order to maintain the sorted sequence.

The algorithm must run in O(log n) time complexity.

---

## 🚀 Approach – Binary Search

Since the array is sorted, Binary Search is the optimal approach.

Binary Search works by repeatedly dividing the search space into halves until:
- The target is found, or
- The search space becomes empty.

---

## 🧠 Logic Explanation

1. Initialize two pointers:
   - left at the beginning of the array
   - right at the end of the array

2. While left is less than or equal to right:
   - Find the middle index.
   - Compare the middle element with the target.

3. If the middle element equals the target:
   - Return its index.

4. If the middle element is smaller than the target:
   - Move left to mid + 1.

5. If the middle element is greater than the target:
   - Move right to mid - 1.

6. If the loop ends and the target is not found:
   - Return left.
   - The left pointer represents the correct insertion position.

---

## 📊 Complexity Analysis

Time Complexity: O(log n)  
Space Complexity: O(1)

---

## 🎯 Key Concepts

- Binary Search
- Searching in a sorted array
- Finding insertion position
- Lower bound logic

---

## 📌 Example

Input:
nums = [1, 3, 5, 6]
target = 2

Output:
1

Explanation:
The target is not present in the array. It should be inserted at index 1 to maintain sorted order.
