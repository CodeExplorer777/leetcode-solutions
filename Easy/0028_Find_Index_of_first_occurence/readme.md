# LeetCode Problem 28 – Find the Index of the First Occurrence in a String

## 🧩 Problem Statement
Given two strings `haystack` and `needle`, return the index of the **first occurrence** of `needle` in `haystack`.

- If `needle` is not part of `haystack`, return `-1`.
- If `needle` is an empty string, return `0`.

---

## 💡 Approach Used

This solution uses Java’s **built-in `indexOf()` method** from the `String` class.

### How `indexOf()` works:
- Searches for the given substring inside another string.
- Returns the **starting index** of the first match.
- Returns `-1` if the substring is not found.

---

## 🧠 Algorithm
1. Call `haystack.indexOf(needle)`
2. Store the returned value in `result`
3. Return `result`

---