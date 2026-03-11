# 1009. Complement of Base 10 Integer

## Problem Statement
Given a non-negative integer `n`, return the **bitwise complement** of its binary representation.

The complement of a binary number is obtained by flipping every bit:
- `1` becomes `0`
- `0` becomes `1`

The complement should only be applied to the bits present in the binary representation of the number.

---

## Example

### Example 1
Input:  
n = 5  

Output:  
2  

Explanation:  
Binary representation of 5 is `101`.  
After flipping the bits we get `010`, which is equal to `2` in decimal.

---

### Example 2
Input:  
n = 7  

Output:  
0  

Explanation:  
Binary representation of 7 is `111`.  
After flipping the bits we get `000`, which equals `0`.

---

## Approach

1. Convert the number into its **binary representation**.
2. Count the number of bits in the number.
3. Create a number (mask) containing **all 1s** with the same number of bits.
4. Use the **XOR operation** between the mask and the original number.
5. The result of this operation gives the **bitwise complement**.

This approach ensures that only the relevant bits of the number are flipped.

---

## Special Case

If the input number is `0`, its binary representation is `0`.  
The complement of `0` is `1`, so the output should be `1`.

---

## Time Complexity
O(log n)  
The algorithm processes each bit of the number.

---

## Space Complexity
O(1)  
Only a few variables are used regardless of input size.

---

## Key Concepts
- Binary Representation
- Bit Manipulation
- XOR Operation
- Bit Masking