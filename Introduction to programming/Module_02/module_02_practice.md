Take a number from user and check if its a even number or odd number.
ans:
#include <stdio.h>

int main()
{
int num1;

    scanf("%d", &num1);

    // check if number is even or odd logic

    if (num1 % 2 == 0)
    {
        printf("num : %d is even", num1);
    }
    else
    {
        printf("num : %d is odd", num1);
    }

    return 0;

}
Take a number from user and check if its a positive or negative number.
ans:
#include <stdio.h>

int main()
{
int num;
scanf("%d", &num);
if (num > 0)
{
printf("number : %d is positive", num);
}
else if (num < 0)
{
printf("number : %d is negative", num);
}
else
{
printf("number : %d is zero", num);
}

    return 0;

}
Explain if else ladder.
ans: an if else ladder is a ladder to check condition and based on the condition it executed the part which is true also in a one ladder it always or gives one true if first one is true then first will executed.

---

# 🧪 C Programming Practice Snippets

---

## 1️⃣ Check if a Number is Even or Odd

**Task:**  
Take a number from the user and check whether it is even or odd.

**Code:**

```c
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    // Check if number is even or odd
    if (num1 % 2 == 0)
    {
        printf("num : %d is even", num1);
    }
    else
    {
        printf("num : %d is odd", num1);
    }

    return 0;
}
```

---

## 2️⃣ Check if a Number is Positive, Negative, or Zero

**Task:**  
Take a number from the user and check whether it is positive, negative, or zero.

**Code:**

```c
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("number : %d is positive", num);
    }
    else if (num < 0)
    {
        printf("number : %d is negative", num);
    }
    else
    {
        printf("number : %d is zero", num);
    }

    return 0;
}
```

---

## 3️⃣ What is an If-Else Ladder?

**Explanation:**  
An **if-else ladder** is a structured way to check multiple conditions one after another. Each condition is evaluated in sequence, and the first one that evaluates to `true` gets executed. Once a matching block is executed, the rest of the ladder is skipped.

In simple terms:

- It checks conditions from top to bottom.
- Only one block is executed—the first one that is `true`.
- If none of the conditions are `true`, the final `else` block (if present) is executed.

---
