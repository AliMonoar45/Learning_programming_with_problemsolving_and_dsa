# 📘 C Programming Basics

## 1️⃣ Why Do We Need `long long int` Data Type?

**Answer:**  
Every data type in C has a memory limit. The `int` type typically uses 4 bytes and can store values up to approximately \(10^9\). But when we need to store larger numbers, we use `long long int`, which uses 8 bytes and can store values up to approximately \(9 \times 10^{18}\).  
So in summary, if we need to work with very large integers, `long long int` is the right choice.

> **From Google:**  
> The `long long int` data type is necessary to store integer values that exceed the maximum range of a standard `int`.  
> A standard `int` typically occupies 4 bytes (32 bits) of memory, allowing it to store values from \(-2,147,483,648\) to \(2,147,483,647\).  
> In various programming scenarios—like scientific computations, large-scale data processing, or competitive programming—calculations may exceed this range.  
> The `long long int` type uses 8 bytes (64 bits), expanding its range to \(-9,223,372,036,854,775,808\) to \(9,223,372,036,854,775,807\).  
> This prevents overflow errors and ensures correct representation of large numbers.

---

## 2️⃣ Rules for Naming a Variable in C

**Answer:**  
Here are the rules for naming variables in C:

- ✅ Can contain letters (a–z, A–Z), digits (0–9), and underscores (`_`)
- 🚫 Cannot start with a digit
- 🚫 Cannot contain whitespace or special characters (like `!`, `@`, `#`, etc.)
- 🚫 Cannot use reserved keywords (e.g., `int`, `return`, `while`)
- 🧠 Should be meaningful and readable
- 🔠 C is case-sensitive (`myVar` and `myvar` are different)

---

## 3️⃣ C Program: Swap and Print Two Numbers

**Task:**  
Write a C program that takes two numbers from the user and prints the second number first, followed by the first number.

**Code:**

```c
#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("Second number : %d \nFirst number : %d", num2, num1);
    return 0;
}
```

**Input:**

```
10 20
```

**Output:**

```
Second number : 20
First number : 10
```
