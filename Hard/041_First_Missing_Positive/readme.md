# LeetCode 41 – First Missing Positive (Optimal Solution)

## 📌 Problem Description

Given an unsorted integer array `nums`, find the **smallest missing positive integer**.

### ⚠️ Constraints

* **Time Complexity:** `O(n)`
* **Extra Space:** `O(1)` (constant space)

---

## 💡 Optimal Approach (In-Place Index Mapping)

This solution uses the **array itself as a hash map** by placing each number at its correct index.

### 🔑 Key Observation

* The smallest missing positive number always lies in the range **[1, n + 1]**, where `n` is the size of the array.
* If a number `x` lies in `[1, n]`, it should be placed at index `x - 1`.

---

## 🧠 Algorithm

1. Iterate through the array.
2. While the current number is in range `[1, n]` and not at its correct index:

   * Swap it with the element at index `nums[i] - 1`.
3. After rearranging:

   * Traverse the array again.
   * The first index `i` where `nums[i] != i + 1` gives the missing number.
4. If all elements are in correct positions, return `n + 1`.


## 📊 Example

**Input**

```
nums = [3, 4, -1, 1]
```

**After Reordering**

```
[1, -1, 3, 4]
```

**Output**

```
2
```

---

## ⏱️ Complexity Analysis

| Type  | Complexity |
| ----- | ---------- |
| Time  | **O(n)**   |
| Space | **O(1)**   |

---

## 🎯 Why This Solution Is Optimal

* No extra memory used
* Works in linear time
* Meets **all LeetCode constraints**
* Frequently asked in **FAANG interviews**

---

## 🏷️ Tags

* Array
* In-Place Algorithm
* Index Mapping
* LeetCode Medium
* C++

---

## 🧩 Pattern

**Cyclic Sort / Index Placement Pattern**

---

## 📌 Final Note

This is the **recommended solution for interviews and competitive programming**.
