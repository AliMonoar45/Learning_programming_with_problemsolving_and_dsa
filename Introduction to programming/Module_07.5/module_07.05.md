# Module 5 Questions and Other Notes

01 ➤ [Problem A. Summation](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A)  
02 ➤ [Problem B. Searching](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B)
03 ➤ [Problem C. Replacement](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C)
04 ➤ [Problem D. Positions in array](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D)
05 ➤ [Problem E. Lowest Number](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E)

---

## 01 Problem: A. Summation

**Time Limit:**

1 second

**Memory Limit:**

64 megabytes

Given a number **N** and an array **A** of **N** numbers. Print the **absolute summation** of these numbers.

**absolute value** : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

### Input

First line contains a number N (1 ≤ N ≤ 10<sup>5</sup>) number of elements.

Second line contains N numbers (-10<sup>9</sup>  ≤  Ai  ≤  10<sup>9</sup>).

### Output

Print the **absolute summation** of these numbers.

### Examples

Input

```
4
7 2 1 3

```

Output

```
13

```

Input

```
3
-1 2 -3

```

Output

```
2

```

### Note:

**Second Example :**

**-1 + 2 + -3 = -2** and it absolute is 2 so the answer is **2**.

---

## 02 Problem: B. Searching

**Time Limit:**
2 second

**Memory Limit:**
64 megabytes

Given a number **N** and an array **A** of **N** numbers. Determine if the number **X exists** in array **A** or not and print its position **(0-index)**.

**Note:** **X** may be found **once** or **more than once** and **may not be found**.

### Input

First line contains a number N (1 ≤ N ≤ 10<sup>5</sup>) number of elements.

Second line contains N numbers (0 ≤ A<sub>i</sub> ≤ 10<sup>9</sup>).

Third line contains a number X (0 ≤ X ≤ 10<sup>9</sup>).

### Output

Print the **position** of **X** in the first time you find it. If it doesn't **exist** print **-1**.

### Examples

Input

```
3
3 0 1
0

```

Output

```
1

```

Input

```
5
1 3 0 4 5
10

```

Output

```
-1

```

Input

```
4
2 3 2 1
2

```

Output

```
0
```

---

## 03 Problem: C. Replacement

**Time Limit:**

1 seconds

**Memory Limit:**
256 megabytes

Given a number **N** and an array **A** of **N** numbers. Print the array after doing the following operations:

- Replace every **positive** number by **1**.
- Replace every **negative** number by **2**.

### Input

First line contains a number _N_ (2 ≤ N ≤ 1000) number of elements.

Second line contains _N_ numbers (-10<sup>5</sup>  ≤  Ai  ≤  10<sup>5</sup>).

### Output

Print the array after the **replacement** and it's values separated by space

### Examples

Input

```
5
1 -2 0 3 4

```

Output

```
1 2 0 1 1
```

---

## 04 Problem: D. Positions in array

**Time Limit:**

1 second

**Memory Limit:**

256 megabytes

Given a number **N** and an array **A** of **N** numbers. Print all array **positions** that store a number **less than or equal** to **10** and the **number stored** in that position.

### Input

First line contains a number _N_ (2 ≤ N ≤ 1000) number of elements.

Second line contains _N_ numbers (-10<sup>5</sup>  ≤  Ai  ≤  10<sup>5</sup>).

**it's guaranteed that there is at least one number in array less than or equal to 10.**

### Output

For each number in the array that is equal to or less than **10** print a single line contains **"A[i] = X"**, where **i** is the **position** in the array and **X** is the **number stored in the position**.

### Examples

Input

```
5
1 2 100 0 30

```

Output

```
A[0] = 1
A[1] = 2
A[3] = 0

```

---

## 05 Problem: E. Lowest Number

**Time Limit:**

time limit per test: 1 second

**Memory Limit:**

memory limit per test: 256 megabytes

Given a number **N** and an array **A** of **N** numbers. Print the **lowest number** and its **position**.

**Note:** if there are more than one answer print **first one's** position.

### Input

First line contains a number _N_ (2 ≤ N ≤ 1000) number of elements.

Second line contains _N_ numbers (-10<sup>5</sup>  ≤  Ai  ≤  10<sup>5</sup>).

### Output

Print the **lowest number** and its **position (1-index)**.

### Examples

Input

```
3
1 2 3

```

Output

```
1 1

```

Input

```
5
5 6 2 3 2

```

Output

```
2 3

```

---
