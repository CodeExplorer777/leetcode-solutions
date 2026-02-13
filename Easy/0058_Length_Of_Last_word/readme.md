# 📌 LeetCode 58 – Length of Last Word

## 📝 Problem Statement
Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is defined as a maximal substring consisting of non-space characters only.

---

## 💡 Approach (Optimal – Without Using Extra Space)

Instead of using `split()`, we traverse the string from the end.

### Steps:
1. Start from the last character of the string.
2. Skip all trailing spaces.
3. Count characters until a space is found.
4. Return the count.

This avoids creating extra arrays and is more efficient.

---

## ⚡ Algorithm Logic

- Initialize index `i = s.length() - 1`
- Initialize `len = 0`
- While `i >= 0` and character is space → move left
- While `i >= 0` and character is not space → increment length and move left
- Return `len`

---

## 🧠 Why This Approach?

- No extra space used
- Handles trailing spaces
- Works for edge cases
- Interview friendly solution

---

## ⏱ Time & Space Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## 🔎 Example

Input:
```
"   fly me   to   the moon  "
```

Output:
```
4
```

Explanation:
The last word is `"moon"` and its length is 4.

---

## 🏆 Conclusion

This solution is optimal because:
- It avoids using `split()`
- It does not create extra arrays
- It handles edge cases efficiently
- It is clean and easy to understand

