# Module 6 Questions and Other Notes

01 ➤ [Problem B. Even Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)  
02 ➤ [Problem C. Even, Odd, Positive and Negative](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)
03 ➤ [Problem D. Fixed Password](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D)
04 ➤ [Problem E. Max](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)
05 ➤ [Problem F. Multiplication table](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)
06 ➤ [Problem Q. Digits](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)
07 ➤ [Practice Problem ](https://docs.google.com/document/d/1k3-3nSz-zHxwdsa1cPcFR9KfFFJdAQIeAQfkdsVoXVI/edit?tab=t.0)

---

## 01 Problem: B. Even Numbers

**Time Limit :**

1 second

**Memory Limit :**

256 megabytes

### Problem Statement :

Given a number **N**. Print all **even** numbers between **1** and **N** inclusive in separate lines.

### Input

Only one line containing a number N (1 ≤ N ≤ 10^3).

### Output

Print the answer according to the required above. If there are no **even** numbers print **-1**.

### Examples

Input

```
10
```

Output

```
2
4
6
8
10
```

Input

```
5
```

Output

```
2
4
```

---

## 02 Problem: C. Even, Odd, Positive and Negative

**Time Limit:**

1 second

**Memory Limit:**

256 megabytes

### Problem Statement :

Given **N** numbers. Count how many of these values are **even**, **odd**, **positive** and **negative**.

### Input

First line contains one number N (1 ≤ N ≤ 10^3) number of values.

Second line contains N numbers (-10<sup>5</sup> ≤ X<sub>i</sub> ≤ 10<sup>5</sup>).

### Output

Print four lines with the following format:

First Line: **"Even: X"**, where **X** is the number of **even** numbers in the given input.

Second Line: **"Odd: X"**, where **X** is the number of **odd** numbers in the given input.

Third Line: **"Positive: X"**, where **X** is the number of **positive** numbers in the given input.

Fourth Line: **"Negative: X"**, where **X** is the number of **negative** numbers in the given input.

### Examples

Input

```
5
-5 0 -3 -4 12
```

Output

```
Even: 3
Odd: 2
Positive: 1
Negative: 3
```

### Note

#### First Example:

- Even Numbers are : 0, -4 , 12

- Odd Numbers are : -5 , -3

- Positive Numbers are : 12

- Negative Numbers are : -5 , -3 , -4

---

## 03 Problem: D. Fixed Password

**Time Limit:**

1 second

**Memory Limit:**

256 megabytes

### Problem Statement :

Given multiple lines each line contains a number **X** which is a password. Print **"Wrong"** if the password is **incorrect** otherwise, print **"Correct"** and **terminate** the program.

#### Note:

The **"Correct"** password is the number **1999**.

### Input

The input contains several passwords.

Each line contains a number X (10^3 ≤ X ≤ 10^4 - 1).

### Output

Print **"Wrong"** if the password is typed **wrong** otherwise, print **"Correct"** if the password is typed **correctly**.

### Examples

Input

```
2200
1020
1999
1000
9999
```

Output

```
Wrong
Wrong
Correct
```

---

## 04 Problem: E. Max

**Time Limit:**

1 second

**Memory Limit:**

256 megabytes

### Problem Statement :

Given a number **N**, and **N** numbers, find **maximum** number in these **N** numbers.

### Input

First line contains a number N (1 ≤ N ≤ 10<sup>3</sup>).

Second line contains N numbers Xi (0 ≤ X<sub>i</sub> ≤ 10<sup>9</sup>).

### Output

Print the **maximum** number.

### Examples

Input

```
5
1 8 5 7 5
```

Output

```
8
```

#### Note:

**If we want also negative values for that we should use:**
`int max = INT_MIN;`
_and also need to add header file:_
`#include<limits.h>`

---

## 05 Problem: F. Multiplication table

**Time Limit:**

1 second

**Memory Limit:**

64 megabytes

### Problem Statement :

Given a number **N**. Print the **multiplication table** of the number from **1** to **12**

### Examples

if **N** = **1**

```
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12
```

### Input

Only one line containing a number N (1 ≤ N ≤ 50).

### Output

Print **12** lines according to the required above.

### Examples

Input

```
1
```

Output

```
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12

```

Input

```
2
```

Output

```
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
2 * 11 = 22
2 * 12 = 24


```

---

## 06 Problem: Q. Digits

**Time Limit:**

1 second

**Memory Limit:**

256 megabytes

### Problem Statement :

Given a number **N**. Print the **digits of that number** from right to left separated by space.

### Input

First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 10<sup>9</sup>)

### Output

For each test case print a single line contains the **digits of the number** separated by space.

### Examples

Input

```
4
121
39
123456
1200

```

Output

```
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1

```

---
