Here you go, Ali — this is the full Markdown content you can copy and paste directly into your `.md` file to replace the current version:

---

```markdown
# 📝 First Week Assignment

🔗 [Assignment Link](https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges)

---

## ✅ Problem 01: Panta Vat

### 🧾 Problem Statement

Print the following lines exactly as shown:
```

Hello, world! I am learning C programming language. ^\_^
Programming is fun and challenging. /\/\/\
I want to give my 100% dedication to learn! I will succeed one day.

````

> Note: The last line contains a tab (`\t`) between the two sentences.

### 📥 Input Format
No input.

### 📤 Output Format
Print the lines as shown.

### 🧪 Sample Output
```

Hello, world! I am learning C programming language. ^\_^
Programming is fun and challenging. /\/\/\
I want to give my 100% dedication to learn! I will succeed one day.

````

### 💡 Solution
```c
#include <stdio.h>

int main()
{
    printf("Hello, world! I am learning C programming language. ^_^\n");
    printf("Programming is fun and challenging. /\\/\\/\\\n");
    printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
    return 0;
}
```

---

## ✅ Problem 02: Multiplication

### 🧾 Problem Statement

Given two integers A and B, output their multiplication.

### 📥 Input Format

Two integers A and B.

### 📌 Constraints

- −10⁹ ≤ A, B ≤ 10⁹

### 📤 Output Format

Print the result of A × B.

### 🧪 Sample Inputs & Outputs

```
Input: 10 50
Output: 500

Input: 10000000 10000000
Output: 100000000000000

Input: -100 62
Output: -6200
```

### 💡 Solution

```c
#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int m = a * b;
    printf("%lld", m);
    return 0;
}
```

---

## ✅ Problem 03: Divisible by 3

### 🧾 Problem Statement

Given a non-negative integer N, check if it is divisible by 3.

### 📥 Input Format

One integer N.

### 📌 Constraints

- 0 ≤ N ≤ 10⁹

### 📤 Output Format

Print `"YES"` if divisible by 3, otherwise `"NO"`.

### 🧪 Sample Inputs & Outputs

```
Input: 33
Output: YES

Input: 29
Output: NO

Input: 0
Output: YES
```

### 💡 Solution

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
```

---

## ✅ Problem 04: Divisible by 3 and 7

### 🧾 Problem Statement

Print all numbers from 1 to N that are divisible by both 3 and 7.

### 📥 Input Format

One integer N.

### 📌 Constraints

- 21 ≤ N ≤ 10000

### 📤 Output Format

Each valid number on a new line.

### 🧪 Sample Inputs & Outputs

```
Input: 30
Output:
21

Input: 50
Output:
21
42

Input: 100
Output:
21
42
63
84
```

### 💡 Solution

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
```

---

## ✅ Problem 05: Eid Shopping Logic

### 🧾 Problem Statement

You will buy a Punjabi only if you have more than 1000 Taka. After buying it, if you have at least 500 Taka left, you will buy shoes. Alisa will only buy shoes if you do.

### 📥 Input Format

One integer N (amount of money you have).

### 📌 Constraints

- 1 ≤ N ≤ 2³¹

### 📤 Output Format

Print the events that will happen, each on a new line.

### 🧪 Sample Inputs & Outputs

```
Input: 1000
Output:
Bad luck!

Input: 1450
Output:
I will buy Punjabi

Input: 1500
Output:
I will buy Punjabi
I will buy new shoes
Alisa will buy new shoes
```

### 💡 Solution

```c
#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk <= 1000)
    {
        printf("Bad luck!");
    }
    else
    {
        printf("I will buy Punjabi\n");
        tk -= 1000;
        if (tk >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    return 0;
}
```

```

---

```
