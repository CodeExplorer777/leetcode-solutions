# 📌 LeetCode 7 – Reverse Integer

## 🧩 Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed.

If reversing `x` causes the value to go outside the signed 32-bit integer range:

    [-2^31 , 2^31 - 1]
    [-2147483648 , 2147483647]

then return `0`.

---

## 💡 Approach

### Step 1: Extract Last Digit
We extract the last digit using:
```java
int digit = x % 10;
```

### Step 2: Remove Last Digit
```java
x = x / 10;
```

### Step 3: Check for Overflow (Important)

Before updating:
```java
rev = rev * 10 + digit;
```

We must check whether multiplying by 10 will cause overflow.

---

## ⚠ Overflow Conditions

### ✅ Positive Overflow

If:
```java
rev > Integer.MAX_VALUE / 10
```

OR

```java
rev == Integer.MAX_VALUE / 10 && digit > 7
```

Return `0`.

(7 is the last digit of 2147483647)

---

### ✅ Negative Overflow

If:
```java
rev < Integer.MIN_VALUE / 10
```

OR

```java
rev == Integer.MIN_VALUE / 10 && digit < -8
```

Return `0`.

(-8 is the last digit of -2147483648)

---

```

---

## ⏱ Time Complexity

O(log10(n))  
We process each digit once.

---

## 💾 Space Complexity

O(1)  
Only constant extra variables are used.

---

## 📌 Examples

| Input        | Output |
|-------------|--------|
| 123         | 321    |
| -123        | -321   |
| 120         | 21     |
| 1534236469  | 0      |

---

## 🎯 Key Learnings

- Reversing digits mathematically  
- Handling 32-bit integer overflow  
- Safe arithmetic operations  
- Writing optimized constant-space solutions  

---
