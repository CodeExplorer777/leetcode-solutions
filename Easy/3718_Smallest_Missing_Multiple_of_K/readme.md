# 3718. Missing Multiple

## 📌 Problem Statement

Given an integer array `nums` and an integer `k`, find the **smallest positive multiple of `k`** that does not appear in `nums`.

Return that missing multiple.

---

## 💡 Approach

The solution uses an **unordered set** to efficiently check whether a number exists in the array.

### 1. Store the Elements

Insert all elements of `nums` into an `unordered_set`.

This allows average **O(1)** lookup time when checking whether a particular multiple exists.

### 2. Check Multiples of `k`

Start with:

```text
x = k
```

Then repeatedly check:

```text
k, 2k, 3k, 4k, ...
```

If the current multiple exists in the set, move to the next multiple by adding `k`.

Once a multiple is not found in the set, return it.

---

## 🧠 Algorithm

1. Create an `unordered_set` containing all elements of `nums`.
2. Initialize `x = k`.
3. While `x` exists in the set:

   * Increment `x` by `k`.
4. Return `x`.

---

## 🔍 Example

### Input

```text
nums = [2, 3, 4, 6, 8]
k = 2
```

The multiples of `2` are:

```text
2 → exists
4 → exists
6 → exists
8 → exists
10 → does not exist
```

Therefore:

```text
Output = 10
```

---

## ⏱️ Complexity Analysis

Let:

* `n` = number of elements in `nums`
* `m` = number of multiples of `k` checked before finding the answer

### Time Complexity

Building the set takes:

**O(n)** average time.

Checking the multiples takes:

**O(m)** average time.

Overall:

**O(n + m)**

### Space Complexity

The unordered set stores all elements of the array.

**O(n)**

---

## 🎯 Key Takeaways

* `unordered_set` provides efficient average **O(1)** membership checking.
* Only multiples of `k` need to be considered.
* Starting from `k` and increasing by `k` guarantees that the first missing value is the **smallest missing multiple**.
* The approach avoids repeatedly scanning the entire array.
