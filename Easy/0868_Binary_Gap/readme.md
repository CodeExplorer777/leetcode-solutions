# 868. Binary Gap

## 📝 Problem Statement

Given a positive integer `n`, return the maximum distance between two consecutive `1`s in the binary representation of `n`.

If there are less than two `1`s, return `0`.

---

## 🔎 Example

### Example 1
Input:
n = 22

Binary representation:
10110

Positions of `1` → 0, 2, 3

Distances:
2 - 0 = 2  
3 - 2 = 1  

Output:
2

---

### Example 2
Input:
n = 8

Binary representation:
1000

Only one `1` exists.

Output:
0

---

## 💡 Approach

1. Convert the number to its binary representation.
2. Traverse the binary string.
3. Keep track of the last index where `1` appeared.
4. Whenever another `1` is found:
   - Calculate the distance between current index and last index.
   - Update the maximum distance.
5. Return the maximum distance.

---

## ⚙️ Algorithm

- Initialize:
  - last = -1
  - maxlen = 0

- Loop through the binary string:
  - If character is `1`:
      - If last is not -1:
          - Update maxlen
      - Update last = current index

- Return maxlen

---

## ⏱ Complexity Analysis

Time Complexity: O(log n)  
(Binary length of n is log₂(n))

Space Complexity: O(log n)  
(Binary string storage)

---

## 🎯 Key Points

- Binary conversion simplifies the problem.
- Only track positions of `1`.
- Efficient and easy to implement.
- Good for beginners and interviews.

---