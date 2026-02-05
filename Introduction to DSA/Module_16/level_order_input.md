# Level Order Input for Binary Tree

## 📌 Introduction
Level Order Input means constructing a binary tree **level by level** using user input.  
We use a **queue** to keep track of nodes whose children are yet to be assigned.

---

## 📌 Algorithm
1. Read the root value.
   - If root value is `-1`, the tree is empty.
   - Otherwise, create the root node and push it into the queue.
2. While the queue is not empty:
   - Pop the front node `f`.
   - Read two integers `l` and `r` (values of left and right child).
   - If `l != -1`, create a new node and attach it as `f->left`, then push it into the queue.
   - If `r != -1`, create a new node and attach it as `f->right`, then push it into the queue.
3. Continue until all levels are processed.

---

## 📌 Corrected Code Implementation (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(NULL), right(NULL) {}
};

Node* input_tree() {
    int val;
    cin >> val;
    if (val == -1) return NULL; // empty tree

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            f->left = new Node(l);
            q.push(f->left);
        }
        if (r != -1) {
            f->right = new Node(r);
            q.push(f->right);
        }
    }
    return root;
}
```

---

## 📌 Example Input/Output

### Input:
```
1
2 3
4 5 -1 6
-1 -1 -1 -1 -1 -1
```

### Tree Constructed:
```
        1
       / \
      2   3
     / \    \
    4   5    6
```

### Explanation:
- Root = `1`
- Children of `1` → `2, 3`
- Children of `2` → `4, 5`
- Children of `3` → `-1, 6` (only right child)
- Remaining nodes have no children (`-1 -1`)

---

## 📌 Complexity
- **Time Complexity:** O(n) (each node is created once).
- **Space Complexity:** O(n) (queue stores nodes level by level).

---

## 📌 Key Notes
- `-1` is used as a sentinel value to indicate **no child**.
- This method ensures the tree is built **level by level**, matching the input order.
- Works well with problems requiring both **construction** and **traversal**.

---
