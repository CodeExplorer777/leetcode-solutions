# 190. Reverse Bits

## 🧩 Problem Statement

Reverse bits of a given 32-bit signed integer.

You must reverse all 32 bits and return the resulting integer.

---

## 📌 Example

**Input:**
n = 43261596

**Output:**
964176192

**Explanation:**

Input in binary (32-bit representation):

00000010100101000001111010011100

After reversing:

00111001011110000010100101000000

Decimal value of reversed binary:
964176192

---

## 💡 Approach

We reverse the number bit by bit.

### Steps:

1. Initialize `result = 0`
2. Repeat 32 times:
   - Extract the last bit using `(n & 1)`
   - Shift result left by 1
   - Add extracted bit to result
   - Shift n right using unsigned shift
3. Return result

---

## ⚠ Important Note (Java)

Use unsigned right shift `>>>` instead of `>>`
to avoid sign extension issues.

---

