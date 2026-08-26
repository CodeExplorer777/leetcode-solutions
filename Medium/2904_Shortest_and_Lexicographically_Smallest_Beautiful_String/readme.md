# 2904. Shortest and Lexicographically Smallest Beautiful String

## 📌 Problem Statement

Given a binary string `s` and an integer `k`, find the **shortest substring** of `s` that contains exactly `k` occurrences of `'1'`.

If multiple substrings have the same minimum length, return the **lexicographically smallest** one.

If no such substring exists, return an empty string.

---

## 💡 Approach

The solution uses the **Sliding Window / Two Pointer** technique.

We maintain a window using two pointers:

* `i` → left boundary of the window
* `j` → right boundary of the window
* `ctr` → number of `1`s currently inside the window

### 1. Expand the Window

Move `j` from left to right.

Whenever:

```text
s[j] == '1'
```

increment `ctr`.

---

### 2. Shrink the Window

Once the window contains more than `k` ones, it is invalid.

We move `i` forward until the window contains at most `k` ones.

We also remove leading zeroes because they do not contribute to the number of `1`s and only make the substring longer.

This helps us maintain the **smallest possible window** for the current number of ones.

---

### 3. Check Valid Windows

Whenever:

```text
ctr == k
```

the current window is a valid beautiful substring.

Compare it with the previously stored result using two conditions:

1. Prefer the substring with **smaller length**.
2. If both have the same length, prefer the **lexicographically smaller** substring.

---

## 🧠 Algorithm

1. Initialize `i = 0`, `j = 0`, and `ctr = 0`.
2. Traverse the string using `j`.
3. If `s[j]` is `'1'`, increment `ctr`.
4. While the window contains more than `k` ones or has unnecessary leading zeroes:

   * Remove `s[i]` from the window.
   * If it is `'1'`, decrement `ctr`.
   * Increment `i`.
5. When `ctr == k`:

   * Extract the current substring.
   * Compare it with the current result.
   * Update the result if the current substring is better.
6. Continue until the entire string has been processed.
7. Return the best substring found.

---

## 🔍 Example

### Input

```text
s = "1011"
k = 2
```

Possible substrings containing exactly two `1`s include:

```text
"101"
"1011"
"011"
"11"
```

The shortest valid substring is:

```text
"11"
```

Therefore:

```text
Output = "11"
```

---

## ⏱️ Complexity Analysis

Let `n` be the length of the string.

### Time Complexity

Both pointers move from left to right, and each character is processed a constant number of times.

**O(n)**

> Note: Constructing and comparing substrings can add extra work in practice, but the sliding-window traversal itself is linear.

### Space Complexity

Apart from the stored result and temporary substring:

**O(n)**

---

## 🎯 Key Takeaways

* The **sliding window** technique avoids checking every possible substring.
* The left pointer removes unnecessary leading zeroes and excess `1`s.
* Maintaining exactly `k` ones ensures that only valid beautiful substrings are considered.
* Among valid candidates, prioritize:

  1. **Shortest length**
  2. **Lexicographically smallest** when lengths are equal.
* The two-pointer traversal provides an efficient solution compared with brute-force substring generation.
