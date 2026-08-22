# 136. Single Number

## 📌 Problem Statement

Given a non-empty array of integers `nums`, every element appears **twice** except for one element that appears exactly once.

Return the element that appears only once.

The solution must run in **linear runtime complexity** and use **constant extra space**.

---

## 💡 Approach

The optimal approach uses the **Bitwise XOR (`^`) operator**.

XOR has two important properties:

* `x ^ x = 0`
* `x ^ 0 = x`

Therefore, when every number appears twice, the duplicate numbers cancel each other out.

For example:

```text
1 ^ 2 ^ 4 ^ 2 ^ 4

= 1 ^ (2 ^ 2) ^ (4 ^ 4)
= 1 ^ 0 ^ 0
= 1
```

Thus, the remaining value is the number that appears only once.

---

## 🧠 Algorithm

1. Initialize a variable `x = 0`.
2. Traverse every element of the array.
3. XOR the current element with `x`.
4. After processing the complete array, `x` contains the unique element.
5. Return `x`.

---

## 🔍 Example

### Input

```text
nums = [1, 2, 4, 2, 4]
```

### XOR Operations

```text
0 ^ 1 = 1
1 ^ 2 = 3
3 ^ 4 = 7
7 ^ 2 = 5
5 ^ 4 = 1
```

### Output

```text
1
```

The duplicate values `2` and `4` cancel themselves out, leaving `1`.

---

## ⏱️ Complexity Analysis

Let `n` be the number of elements in the array.

### Time Complexity

The array is traversed exactly once.

**O(n)**

### Space Complexity

Only one additional variable is used.

**O(1)**

---

## 🎯 Key Takeaways

* XOR is ideal when every element appears twice except one.
* Duplicate values cancel each other using `x ^ x = 0`.
* XOR with zero leaves the original value unchanged.
* No sorting or extra data structures are required.
* The solution achieves the required **O(n) time** and **O(1) space** complexity.
