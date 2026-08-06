# 3345. Smallest Divisible Digit Product I

## 📌 Problem Statement

Given two integers `n` and `t`, find the **smallest integer greater than or equal to `n`** such that the **product of its digits** is divisible by `t`.

Return the required integer.

---

## 💡 Approach

The solution uses a **brute-force search**.

1. Start checking from `n`.
2. Calculate the product of the digits of the current number.
3. If the digit product is divisible by `t`, return the current number.
4. Otherwise, increment the number and repeat.

Since the problem guarantees that an answer exists within the constraints, the loop eventually terminates.

---

## 🧠 Algorithm

1. Initialize `i = n`.
2. Repeat indefinitely:
   - Compute the product of digits of `i`.
   - If `product % t == 0`, return `i`.
   - Otherwise increment `i`.

---

## ✅ Correctness

For every integer starting from `n`, the algorithm checks whether the product of its digits is divisible by `t`.

- Every candidate number is examined exactly once.
- The first number satisfying the condition is immediately returned.
- Therefore, the returned number is the **smallest valid integer**.

Hence, the algorithm is correct.

---

## ⏱️ Complexity Analysis

Let:

- `k` = number of digits in the current number
- `m` = number of integers checked before finding the answer

### Time Complexity

- Computing digit product: **O(k)**
- Checking `m` numbers:

**Overall:** `O(m × k)`

### Space Complexity

Only a few integer variables are used.

**Overall:** `O(1)`

---

## 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int findProduct(int n)
{
    int prod = 1;
    while (n > 0)
    {
        prod *= (n % 10);
        n /= 10;
    }
    return prod;
}

int smallestNumber(int n, int t)
{
    int i = n;

    while (true)
    {
        if (findProduct(i) % t == 0)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    int n, t;

    cout << "Enter Value of n and t\n";
    cin >> n >> t;

    cout << smallestNumber(n, t);

    return 0;
}
```

---

## 🔍 Example

### Input

```text
n = 10
t = 2
```

### Process

```
10 → Product = 1 × 0 = 0
0 % 2 = 0 ✓
```

### Output

```text
10
```

---

## 🎯 Key Takeaways

- Simple brute-force solution.
- Uses digit extraction with modulo (`%`) and division (`/`).
- Constant auxiliary space.
- Easy to implement and suitable for the given constraints.