# Module 5 Questions and Other Notes

01 ➤ [Problem I: Welcome for you with Conditions](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I)  
02 ➤ [Problem J: Multiples](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)
03 ➤ [Problem P: First digit !](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P)
04 ➤ [Problem N. Char](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)
05 ➤ [Problem M. Capital or Small or Digit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M)
06 ➤ [Problem K. Max and Min](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)
07 ➤ [Practice Problem ](https://docs.google.com/document/d/1T7X7Qo2VGbZF2rAZ5IHerF602wOmqdZ_PJB1s7YYLdU/edit?tab=t.0)


---

## 01 Problem: I. Welcome for you with Conditions

**Time Limit:**

1 second

**Memory Limit:**

64 megabytes

_Given two numbers **A** and **B**. Print **"Yes"** if **A** is **greater** than or **equal** to **B**. **Otherwise** print **"No"**._

### Input

```
Only one line containing two numbers A and B (0 ≤ A, B ≤ 100).
```

### Output

```
Print "Yes" or "No" according to the statement.
```

### Examples

Input

```
10 9
```

Output

```
Yes
```

Input

```
5 5
```

Output

```
Yes
```

Input

```
5 7
```

Output

```
No
```

---

## 02 Problem: J. Multiples

**Time Limit:**
1 second

**Memory Limit:**
256 megabytes

_Given two numbers **A** and **B**. Print **"Multiples"** if **A** is multiple of **B** or vice versa. Otherwise print **"No Multiples"**._

### Input

```
Only one line containing two numbers A, B (1 ≤ A, B ≤ 10⁶)
```

### Output

```
Print "Multiples" or "No Multiples" corresponding to the read numbers.
```

### Examples

Input

```
9 3
```

Output

```
Multiples
```

Input

```
6 24
```

Output

```
Multiples
```

Input

```
12 5
```

Output

```
No Multiples
```

### Note

**A is said to be Multiple of B if B is divisible by A.**

- **First Example:** 9 is divisible by 3 → **Multiples**
- **Second Example:** 24 is divisible by 6 → **Multiples**
- **Third Example:** Neither is divisible → **No Multiples**

---

## 03 Problem: P. First digit !

**Time Limit:**

0.25 seconds

**Memory Limit:**
64 megabytes

_Given a number **X**. Print **"EVEN"** if the first digit of **X** is even number. Otherwise print **"ODD"**._

### Input

```
Only one line containing a number X (999 < X ≤ 9999)
```

### Output

```
If the first digit is even print "EVEN" otherwise print "ODD".
```

### Examples

Input

```
4569
```

Output

```
EVEN
```

Input

```
3569
```

Output

```
ODD
```

### Note

- In 3569, the first digit is 3 → ODD
- To find first deist we need to think like that:
  if the deist is 12 then if we divide it with 10 in c we get 1 that means 1 similar if the number is 34 and do the same we get 34/10= 3 in c an similar for 123 for this we just divide it with 100 123/100 gives 1 in c so it go one like:

```
23 / 10 = 2
334 / 100 = 3
4354 / 100 = 4
this is for first digit extract.
```

---

## 04 Problem: N. Char

**Time Limit:**

time limit per test: 0.25 seconds

**Memory Limit:**

memory limit per test: 64 megabytes

Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

**Note : difference between 'a' and 'A' in ASCII is 32 .**

### Input

Only one line containing a character X which will be a capital or small letter.

### Output

Print the answer to this problem.

### Examples

Input

```
a
```

Output

```
A
```

Input

```
A
```

Output

```
a
```

---

## 05 Problem: M. Capital or Small or Digit

**Time Limit:**

time limit per test: 1 second

**Memory Limit:**

memory limit per test: 256 megabytes

_Given a letter **X**. Determine whether **X** is **Digit** or **Alphabet** and if it is Alphabet determine if it is **Capital Case** or **Small Case**._

**Note :**

- Digits in ASCII '0' = 48,'1' = 49 ....etc
- Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
- Small letters in ASCII 'a' = 97,'b' = 98 ....etc\*\*

### Input

Only one line containing a character X which will be a capital or small letter or digit.

### Output

Print a single line contains **"IS DIGIT"** if X is digit otherwise, print **"ALPHA"** in the first line followed by a new line that contains **"IS CAPITAL"** if X is a capital letter and **"IS SMALL"** if X is a small letter.

### Examples

Input

```
A
```

Output

```
ALPHA
IS CAPITAL
```

Input

```
9
```

Output

```
IS DIGIT
```

Input

```
a
```

Output

```
ALPHA
IS CAPITAL
```

---

## 06 Problem: K. Max and Min

**Time Limit:**

0.25 seconds

**Memory Limit:**
64 megabytes

_Given 3 numbers **A**, **B** and **C**, Print the **minimum** and the **maximum** numbers_

### Input

Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B, C ≤ 10^5)

### Output

Print the **minimum** number followed by a single space then print the **maximum** number.

### Examples

Input

```
1 2 3
```

Output

```
1 3
```

Input

```
-1 -2 -3
```

Output

```
-3 -1
```

Input

```
10 20 -5
```

Output

```
-5 20
```

---
