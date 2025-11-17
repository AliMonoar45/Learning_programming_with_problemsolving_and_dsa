# Recursion

## Call Stack Or Stack:-

A **call stack** is a special data structure used by a computer program to keep track of function calls. Here's a simple definition:

> **Call Stack:** A Last-In, First-Out (LIFO) structure that stores information about active functions in a program, including where to return after each function finishes.

### 🔍 Key points:
- Each time a function is called, a **stack frame** is added to the top of the stack.
- When the function finishes, its frame is removed, and control returns to the previous function.
- It helps manage **nested** and **recursive** function calls.
- If the stack grows too large (e.g., infinite recursion), it causes a **stack overflow** error.
---
## Recursive function:-

A function call itself in its body is called recursive function, and this method is called **Recursion**.

### Infinity Recursion :- 
```c
#include <stdio.h>
void hello(){
    printf("hello\n");
    hello();
}
int main() {
    printf("hi\n");
    hello();
    return 0;
}
```
>[!NOTE]
> This is an example of infinity recursion. Here in main function it call's hello() and inside hello function it call's itself and no way to stop so it try to runs infinitely  thus it called Infinity recursion.

**Important**
it cause stack overflow. when stack is full and there is no space in stack memory it called stack overflow.


## Control recursion :-
```c
#include <stdio.h>
void call_n(int n){
    if (n==0) // end condition
    {
        return;
    }
    
 printf("%d\n", n);
 call_n(n - 1); // increment/decrement
}
int main() {
    int n;
    scanf("%d", &n);
    call_n(n); // initialization
    return 0;
}
```
## Few example and flow of recursion
```c
//1 to n
#include <stdio.h>
void hello(int i, int target)
{
    if (i == target+1)
    {
        return;
    }

    printf("%d\n", i);
    hello(i + 1,target);
}
int main()
{
    int i = 1;
    int target;
    scanf("%d", &target);
    hello(i, target);
    return 0;
}
```
```
1
2
3
4
5

```
**for input 5**
### Now see if we just call hello function before print it will do reverse printing
```c
//1 to n
#include <stdio.h>
void hello(int i, int target)
{
    if (i == target+1)
    {
        return;
    }

    hello(i + 1,target);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    int target;
    scanf("%d", &target);
    hello(i, target);
    return 0;
}
```
```
5
4
3
2
1
```
### another we can also do
```c
#include <stdio.h>
void call_n(int n){
    if (n==0) // end condition
    {
        return;
    }
    
 printf("%d\n", n);
 call_n(n - 1); // increment/decrement
}
int main() {
    int n;
    scanf("%d", &n);
    call_n(n); // initialization
    return 0;
}
```
```
5
4
3
2
1
```