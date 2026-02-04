# Longest Palindromic Substring (Java)

## 📌 Problem Statement
Given a string `s`, return the **longest palindromic substring** in `s`.

A palindrome is a string that reads the same forward and backward.

### Examples
- Input: `"babad"` → Output: `"bab"` or `"aba"`
- Input: `"cbbd"` → Output: `"bb"`

---

## 💡 Approach: Expand Around Center

The key observation is:

> **Every palindrome expands from a center.**

A palindrome can be of:
1. **Odd length** → center is a single character (`"aba"`)
2. **Even length** → center is between two characters (`"abba"`)

For each character in the string, we treat it as a center and expand outward to check for the longest palindrome.

---

## 🔁 Algorithm Logic

1. Iterate through each character in the string.
2. For each index `i`, check:
   - Odd-length palindrome using `(i, i)`
   - Even-length palindrome using `(i, i + 1)`
3. Expand outward while characters match.
4. Track the maximum length palindrome found.
5. Update the start and end indices when a longer palindrome is detected.
6. Return the substring between the final start and end indices.

---

## 🔍 Helper Function Explanation

The helper function expands around a given center:

- It uses two pointers (`left` and `right`)
- Moves outward while:
  - Indices are within bounds
  - Characters at both pointers are equal
- Once expansion stops, it calculates the palindrome length

This avoids creating extra substrings or reversing strings.

---

## ⏱️ Complexity Analysis

| Type | Complexity |
|----|----|
| Time | **O(n²)** |
| Space | **O(1)** |

This is optimal for interview and competitive programming constraints.

---

## ✅ Why This Approach Works Well

- No unnecessary string reversals
- Constant extra space
- Handles both odd and even palindromes
- Efficient and clean implementation

---

## 🏁 Conclusion

The **Expand Around Center** technique efficiently finds the longest palindromic substring by leveraging the natural symmetry of palindromes.  
It is widely accepted as the best balance between simplicity and performance.

---

⭐ If you found this helpful, consider starring the repository!
