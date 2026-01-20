# 🔑 LeetCode 3270 – Finding the Key of the Number

## 🧩 Problem Overview
You are given **three integers**.  
Your task is to generate a **key** by following these steps:

1. Convert each integer into a **4-digit string** by adding **leading zeros** if necessary.
2. Compare the digits **index-wise** across all three numbers.
3. For each index, select the **minimum digit**.
4. Combine these minimum digits to form the final key.
5. Return the key as an **integer**.

---

## ✨ Example

### Input
num1 = 12
num2 = 21
num3 = 231


### After Padding
0012
0021
0231


### Index-wise Minimum
| Index | Digits Compared | Minimum |
|------|-----------------|---------|
| 0 | 0, 0, 0 | 0 |
| 1 | 0, 0, 2 | 0 |
| 2 | 1, 2, 3 | 1 |
| 3 | 2, 1, 1 | 1 |

### Output
0011 → 11


---

## 🧠 Key Observations
- Strings are used to **preserve leading zeros**.
- Digit comparison is done using **character comparison**.
- The minimum digit is selected **column-wise**, not by comparing whole numbers.

---

## 🛠️ Approach
1. Convert all numbers to strings.
2. Pad each string to length 4 using leading zeros.
3. Iterate over each digit index.
4. Find the minimum digit among the three numbers at that index.
5. Build the result and convert it to an integer.

---
