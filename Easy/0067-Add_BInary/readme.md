# 67. Add Binary

## 📝 Problem Statement

Given two binary strings `a` and `b`, return their sum as a binary string.

Both strings contain only characters `'0'` and `'1'`.

You must return the result in binary format.

---

## 📌 Example 1

Input:
a = "11"  
b = "1"

Output:
"100"

---

## 📌 Example 2

Input:
a = "1010"  
b = "1011"

Output:
"10101"

---

## 🧠 Approach / Logic

This problem is similar to manual binary addition.

### Steps:

1. Start from the rightmost digit of both strings.
2. Add:
   - current digit of `a`
   - current digit of `b`
   - carry (if any)
3. Store `(sum % 2)` in result.
4. Update carry as `(sum / 2)`.
5. Continue until both strings are processed and carry becomes 0.
6. Reverse the result at the end.

---

## ⚡ Algorithm

- Initialize two pointers at the end of both strings.
- Maintain a carry variable.
- Traverse both strings from right to left.
- Append result digit to StringBuilder.
- Reverse and return final string.

---

## ⏱ Time & Space Complexity

Time Complexity: O(max(n, m))  
Space Complexity: O(max(n, m))  

Where `n` and `m` are lengths of the input strings.

---

## 🎯 Key Concepts

- Two pointer technique  
- String traversal  
- Carry handling logic  
- Simulation of binary addition  

---

## ✅ Conclusion

This problem tests understanding of basic string manipulation and simulation of binary addition logic.

Efficient and optimal solution works in linear time.
