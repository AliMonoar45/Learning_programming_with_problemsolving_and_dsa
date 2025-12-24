# Time and Space Complexity

## Time Complexity

### Why we need *Time Complexity*
- It tells us how fast or slow a program will run as the input grows.
- Helps compare different algorithms and choose the most efficient one.
- Predicts performance for large inputs without actually running them.

### What is *Time Complexity*
- Time complexity describes how the running time of a program grows as the input size increases.
- In simple words: it shows how quickly execution time increases when data becomes bigger.

### Asymptotic Notation
- **Ω (Omega)** → Best case  
- **Θ (Theta)** → Average case  
- **O (Big O)** → Worst case  

### Rules
1. Always consider the **worst case**.  
2. Ignore constants (e.g., `O(2n)` → `O(n)`).  
3. Focus on growth rate, not exact seconds.  

---

## Linear Time Complexity

- **Definition:** An algorithm has linear time complexity if its running time grows directly in proportion to the input size `n`.  
- **Meaning:** If you double the input size, the time taken roughly doubles.  
- **Notation:** `O(n)`  

### Example in C++

```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;            // O(1)
    cin >> n;         // O(1)

    for (int i = 0; i < n; i++) { // O(n)
        cout << i << " ";
    }

    cout << endl;     // O(1)

    for (int i = 0; i < n; i++) { // O(n)
        cout << i << " ";
    }

    return 0;         // O(1)
}

/*
   Total = O(1) + O(1) + O(n) + O(1) + O(n) + O(1)
         = O(2n + 4)
   Ignore constants → O(n)
*/
```

### Logarithmic Time Complexity

- **Definition:** An algorithm has logarithmic time complexity if the running time grows in proportion to the logarithm of the input size `n`.  
- **Meaning:** Each step reduces the problem size by a constant factor (often halves it).  
- **Notation:** `O(log n)`  
- **In simple** If any loop increment part is either multiply or reduce as divide then it will be logarithmic complexity.


#### Example 1: Doubling Loop

```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;            // O(1)
    cin >> n;         // O(1)

    for (int i = 1; i < n; i *= 2) { // O(log n)
        cout << i << " ";            // O(1) per iteration → O(log n) total
    }

    cout << endl;     // O(1)
    return 0;         // O(1)
}

/*
   Total = O(1) + O(1) + O(log n) + O(1) + O(1)
         = O(log n)
*/
```

```c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i < n; i++)
    {                     
        cout << i << " ";
        i *= k;  //O(log k N)
    }

    cout << endl; // O(1)
    return 0;     // O(1)
}

/*
   Total = O(1) + O(1) + O(log k n) + O(1) + O(1)
         = O(log k n)
         = O(log n)
*/
```

!!!
#### Quick Memory Trick
- **Multiply or divide in loop update → O(log n).**
- **Increment or decrement in loop update → O(n).**
- **No loop (constant work) → O(1).**

---