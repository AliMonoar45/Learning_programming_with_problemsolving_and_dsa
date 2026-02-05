# Level Order Traversal in Binary Tree

## 📌 Introduction
Level Order Traversal (also known as **Breadth-First Traversal**) is a method of visiting all nodes of a binary tree **level by level** from top to bottom, left to right.  
It uses a **queue** data structure to keep track of nodes to be processed.

---

## 📌 Algorithm
1. Create an empty queue.
2. Push the root node into the queue.
3. While the queue is not empty:
   - Remove (pop) the front node.
   - Process the node (print its value).
   - Push its left child (if exists).
   - Push its right child (if exists).
4. Repeat until all nodes are processed.

---

## 📌 Code Implementation (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(NULL), right(NULL) {}
};

void level_order(Node *root) {
    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        // Take out the front node
        Node *f = q.front();
        q.pop();

        // Process the node
        cout << f->val << " ";

        // Push children into the queue
        if (f->left) {
            q.push(f->left);
        }
        if (f->right) {
            q.push(f->right);
        }
    }
}
```

---

## 📌 Example

### Input Tree:
```
        1
       / \
      2   3
     / \   \
    4   5   6
```

### Traversal Steps:
- Start with root → `1`
- Next level → `2, 3`
- Next level → `4, 5, 6`

### Output:
```
1 2 3 4 5 6
```

---

## 📌 Complexity Analysis
- **Time Complexity:**  
  Each node is visited once → **O(n)**, where `n` is the number of nodes.
- **Space Complexity:**  
  Queue stores nodes level by level → **O(n)** in worst case.

---

## 📌 Key Notes
- This method is **iterative** (uses a queue).
- It is different from **DFS (Depth-First Search)** methods like preorder, inorder, and postorder.
- Useful for problems like:
  - Printing tree level by level
  - Finding shortest path in unweighted graphs
  - Serializing/Deserializing trees

---

