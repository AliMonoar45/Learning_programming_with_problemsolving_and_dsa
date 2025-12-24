# Problems with Array and Vector

- For arrays, the main problem is **fixed size**, but this can be solved using vectors.
- Another problem with both arrays and vectors is that they use **sequential memory allocation**.
  - To define an array or vector, we need sequential memory.

### Example

Suppose we have memory of ten spaces like:

```
{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}, {10}
```

- If we declare:

  ```cpp
  int x = 10;
  ```

  It takes the block `{4}`.

- Now, if we declare a 10‑size array:
  ```cpp
  int arr[10];
  ```
  It **cannot be initialized** because the `{4}`th address is already occupied.  
  Arrays and vectors need sequential memory allocation, so this becomes a problem.

Therefore, to solve this problem, we can use a **linked list type data structure**.  
Now we discuss the linked list.

---

# Idea of Linked List

To solve the previous problem:

- If we have something that can hold the **data** and also the **address of the next element**, we can chain them together.

### Example

Suppose we want to store 3 data values:

- `20` at `{f1}`
- `30` at `{d7}`
- `40` at `{c4}`

We can store data in any location.  
But another problem occurs: how do we know that the first element is `20`, then `30`, then `40`?  
We cannot access sequentially just by using `{f1}`.

### Solution

If at `{f1}` we store:

- The value (`20`)
- The address of the next element (`{d7}`)

Then we can link nodes together.  
This is the idea of a **linked list**.

---

# Node Definition

- Each element that stores some value (data) and the address of the next element is called a **node**.
- Each node points only to the next element, so it is called a **singly linked list**.
- In the last node, the address field is set to `NULL` to mark the end of the list.
- This creates an **imaginary connection**: data is stored in random memory, but we link them together.

---

# Creating a Node

To create a singly linked list we need to store two things:

1. A value (with desired input type).
2. The address of the next node (a pointer).

To achieve this, we use a **class (user-defined data type)**.

```cpp
class Node {
public:
    int val;
    Node *next; 
};
```

---

# Example Code: Creating and Accessing Nodes

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next; // pointer to the next node
};

int main() {
    Node a, b, c;

    // manually assign values
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // link nodes
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // accessing values
    cout << a.val << endl;                // prints a's value (10)
    cout << (*a.next).val << endl;        // prints b's value (20) using a's link
    cout << (*(*a.next).next).val << endl;// prints c's value (30) using chain
    // shortcut using arrow operator
    cout << a.next->next->val << endl;    // prints 30
    return 0;
}
```

**Output:**

```
10
20
30
30
```

---

# Traversal Diagram

### Step-by-Step Visualization

```
Head → [10|next] → [20|next] → [30|NULL]
```

- **Head** points to the first node (`10`).
- The first node points to the second node (`20`).
- The second node points to the third node (`30`).
- The third node’s `next` is `NULL`, marking the end of the list.

### Traversal Process

1. Start at `Head`.
2. Print `Head->val` → `10`.
3. Move to `Head->next`.
4. Print `Head->next->val` → `20`.
5. Move to `Head->next->next`.
6. Print `Head->next->next->val` → `30`.
7. Stop when `next == NULL`.

---

# Summary

- Arrays → Fixed size, sequential memory required.
- Vectors → Dynamic size, but still sequential memory required.
- Linked List → Flexible, dynamic, no sequential memory requirement.  
  ✅ Solves the problem of memory fragmentation.
- Nodes store both **data** and **address of the next node**.
- Traversal continues until a node’s `next` is `NULL`.

---
