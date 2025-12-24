# Arrays, Vectors, and Linked Lists

---

## 1. Problems with Arrays and Vectors

- **Array Limitation:**  
  - Arrays have a **fixed size** once declared.  
  - Example:  
    ```cpp
    int arr[5]; // always size 5
    ```

- **Sequential Memory Requirement:**  
  - Both arrays and vectors require contiguous memory blocks.  
  - If memory is fragmented, they cannot be allocated.

### Example
Suppose memory blocks are arranged like this:
```
{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}, {10}
```

- Declaring:
  ```cpp
  int x = 10;
  ```
  occupies block `{4}`.  

- Declaring:
  ```cpp
  int arr[10];
  ```
  fails because block `{4}` is already occupied, breaking the requirement for sequential memory.

---

## 2. Linked List: The Solution

To overcome sequential memory problems, we use **linked lists**.

### Core Idea
- Store data in **nodes** scattered across memory.  
- Each node contains:
  1. **Data** (value).  
  2. **Pointer** to the next node.  

### Example
Suppose we want to store values `20`, `30`, `40`:
- `20` at `{f1}`  
- `30` at `{d7}`  
- `40` at `{c4}`  

We link them:
```
Head → [20|next] → [30|next] → [40|NULL]
```

---

## 3. Node Definition in C++

```cpp
class Node {
public:
    int val;     // data
    Node *next;  // pointer to next node
};
```

---

## 4. Creating and Accessing Nodes (Static Memory)

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
    cout << a.val << endl;                // prints 10
    cout << (*a.next).val << endl;        // prints 20
    cout << (*(*a.next).next).val << endl;// prints 30
    cout << a.next->next->val << endl;    // shortcut, prints 30
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

- Here, the first node is called the **head**.  
- Problem: Static memory is erased after function execution, so nodes created inside functions cannot persist.

---

## 5. Dynamic Memory Allocation

To solve the static memory issue, we use **dynamic memory** (`new` keyword).  
This ensures nodes remain in memory until explicitly deleted.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);

    // connect nodes
    head->next = a;
    a->next = b;

    cout << head->val << endl;          // prints 10
    cout << head->next->val << endl;    // prints 20
    cout << head->next->next->val << endl; // prints 40

    return 0;
}
```

---

## 6. Printing Linked List with Loop

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connect nodes
    head->next = a;
    a->next = b;
    b->next = c;

    while (head != NULL) {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}
```

**Output:**
```
10
20
30
40
```

---

## 7. The Catch: Losing Head

If we traverse using `head`, we lose the original pointer (it becomes `NULL`).  
So printing again fails.

### Example
```cpp
while (head != NULL) {
    cout << head->val << endl;
    head = head->next;
}

while (head != NULL) {
    cout << head->val << endl; // nothing prints
    head = head->next;
}
```

---

## 8. Solution: Use a Temporary Pointer

```cpp
Node *temp = head;

while (temp != NULL) {
    cout << temp->val << endl;
    temp = temp->next;
}

temp = head; // reset temp
while (temp != NULL) {
    cout << temp->val << endl;
    temp = temp->next;
}
```

**Output:**
```
10
20
30
40
10
20
30
40
```

✅ We solved the problem by preserving `head` and using a temporary pointer.

---

## 9. Memory Remark

- **Nodes** are created on the **heap** (dynamic memory).  
- **Pointers** like `head`, `a`, `b`, `c` are stored on the **stack**.  
- This distinction is crucial for understanding persistence and scope.

---

## 10. Visualization of Traversal

```
Head → [10|next] → [20|next] → [30|next] → [40|NULL]
```

Traversal steps:
1. Start at `Head`.  
2. Print `Head->val`.  
3. Move to `Head->next`.  
4. Continue until `next == NULL`.  

---

## 11. Key Takeaways

- Arrays → Fixed size, sequential memory required.  
- Vectors → Dynamic size, but still sequential memory required.  
- Linked List → Flexible, dynamic, no sequential memory requirement.  
- **Head pointer** is essential to access the list.  
- Use **temporary pointers** to traverse without losing the list.  
- Nodes live on the **heap**, pointers on the **stack**.  
