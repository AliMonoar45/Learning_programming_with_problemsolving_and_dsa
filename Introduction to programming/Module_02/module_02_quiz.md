### 1️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    int a = 15 % 4;
    printf("%d", a);
}
```

**Options:**

- A) 1
- B) 2
- C) 3 ✅
- D) 4

**Explanation:**  
`%` (Modular operator) এর সাহায্যে আমরা দুটি সংখ্যার ভাগশেষ বের করতে পারি। এক্ষেত্রে ১৫ কে ৪ দিয়ে ভাগ করলে ভাগশেষ আসে ৩।

---

### 2️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    double a = 15 / 4;
    printf("%lf", a);
}
```

**Options:**

- A) 3
- B) 3.000000✅
- C) 3.750000
- D) 4

**Explanation:**  
Module 2.1 - Arithmetic Operators এ আমরা দেখেছি, যদি আমরা দুটি integer নাম্বার কে ভাগ করি, সেক্ষেত্রে দশমিকের পরের অংশ বাদ পড়ে যায়। কারণ কম্পাইলার integer division কে integer হিসেবেই ডিল করে।

---

### 3️⃣ Evaluate: `20 > 10 && 10 < 20`

**Options:**

- A) True ✅
- B) False

**Explanation:**  
এখানে `&&` (AND operator) ব্যবহার করা হয়েছে। দুটি condition True হলে পুরো expression টি True হয়। যেহেতু দুটি condition ই True, তাই উত্তর হবে True।

---

### 4️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    int a = 6;

    if (a > 5) {
        printf("hi");
    }
    else if (a > 3) {
        printf("bye");
    }
}
```

**Options:**

- A) bye
- B) hi ✅

**Explanation:**  
এটি একটি if-else ladder। প্রথম condition True হওয়ায় `"hi"` প্রিন্ট হয়েছে এবং ladder এর বাকি অংশ execute হয়নি।

---

### 5️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main() {
    int num = 5;

    if (num > 0) {
        if (num < 10) {
            printf("Small positive number\n");
        }
    }

    return 0;
}
```

**Options:**

- A) Error in code
- B) No output
- C) Small positive number ✅

**Explanation:**  
এটি nested if এর একটি example। দুটি condition True হওয়ায় `"Small positive number"` প্রিন্ট হয়েছে।

---

### 6️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if (x >= y || x <= y) {
        printf("hi");
    }
    else {
        printf("hello");
    }
}
```

**Options:**

- A) hi ✅
- B) hello
- C) None of the above
- D) All of the above

**Explanation:**  
`||` (OR operator) এর যেকোনো একটি condition True হলে পুরো expression True হয়। এখানে `x <= y` True, তাই `"hi"` প্রিন্ট হয়েছে।

---

### 7️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if (x >= y || x <= y) {
        printf("hi ");
    }

    printf("hello");
}
```

**Options:**

- A) hi hello ✅
- B) hello hi
- C) hihello
- D) hello

**Explanation:**  
OR operator এর কারণে প্রথম condition True হয়েছে, তাই `"hi "` প্রিন্ট হয়েছে। এরপর `"hello"` প্রিন্ট হয়েছে।

---

### 8️⃣ Which of the following is **not** a logical or relational operator?

- A) `!=`
- B) `==`
- C) `||`
- D) `+` ✅

**Explanation:**  
`+` একটি Arithmetic Operator, এটি logical বা relational operator নয়।

---

### 9️⃣ What will be the output of the following code?

```c
#include <stdio.h>
int main()
{
    int x = 5;
    if (x < 10) {
        printf("hello ");
    }
    if (x == 5) {
        printf("hi");
    }
    else {
        printf("no");
    }
}
```

**Options:**

- A) hello
- B) hi
- C) hello hi ✅
- D) hello no

**Explanation:**  
দুটি if statement আলাদা। প্রথমটি True হওয়ায় `"hello "` প্রিন্ট হয়েছে। দ্বিতীয়টি True হওয়ায় `"hi"` প্রিন্ট হয়েছে।

---

### 🔟 Why do we need relational operators?

- A) To add two numbers
- B) To compare values and perform logical operations on them ✅
- C) To get the remainder of two numbers
- D) To check if both of the conditions are true

**Explanation:**  
দুই বা ততোধিক conditionals চেক করতে আমরা relational operator ব্যবহার করি।

---
