# 761. Special Binary String

## 🧩 Problem Description

A **special binary string** is a binary string that satisfies:

1. The number of `1`s is equal to the number of `0`s.
2. For every prefix of the string, the number of `1`s is greater than or equal to the number of `0`s.

You are given a special binary string `s`.

You are allowed to swap two consecutive special substrings.

Return the lexicographically largest string possible after any number of swaps.

---

## 🔎 Understanding the Concept

This problem is similar to **valid parentheses**.

Think of:
- `1` as `"("`
- `0` as `")"`

A special binary string behaves like a valid parentheses string.

---

## 💡 Approach (Divide & Conquer + Recursion)

### Step 1: Identify Special Substrings
Traverse the string while maintaining a balance counter:
- Increase count for `1`
- Decrease count for `0`

Whenever balance becomes `0`, we found a valid special substring.

---

### Step 2: Recursively Solve Inner Part
For every special substring:
- Remove outer `1` and `0`
- Recursively make the inside largest
- Add `1 + inner + 0` back

---

### Step 3: Sort in Descending Order
To make the final string lexicographically largest:
- Sort all special substrings in reverse lexicographical order
- Concatenate them

---

## 🧠 Why Sorting Works?

Lexicographically larger means:
- The string with more `1`s earlier is bigger.

So placing larger special substrings first ensures maximum possible result.

---

## 🔥 Example

Input:
```
11011000
```

Break into special substrings:
```
11011000
= 1 (101100) 0
```

After recursive rearrangement:
```
11100100
```

Output:
```
11100100
```

---

## ⏱ Time Complexity

O(n²)  
Due to recursion, substring operations, and sorting.

---

## 📦 Space Complexity

O(n)  
Due to recursion stack and list storage.

---

## 🏁 Key Takeaways

- Similar to valid parentheses structure.
- Use recursion to solve inner substrings.
- Sort special substrings in descending order.
- Greedy placement ensures lexicographically largest result.

---

## 🚀 Tags

- Recursion
- Divide and Conquer
- Greedy
- Sorting
- String Manipulation