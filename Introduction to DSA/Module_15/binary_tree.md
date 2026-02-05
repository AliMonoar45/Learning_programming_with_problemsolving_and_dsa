
# 🌳 Tree Data Structure

## Traversal in Trees
- In **linear data structures** (like arrays, linked lists, stacks, queues), we can traverse **front to back** and **back to front**.  
- In a **tree**, traversal is different:
  - We usually start from the **root** and move toward the **leaves**.  
  - There is no direct "end-to-begin" traversal because trees are hierarchical, not sequential.  

---

## Node Properties
- **Root Node**: The topmost node of the tree. It has **no parent**.  
- **Leaf Node**: A node with **no children**.  
- **Internal Node**: Any node that has at least one child.  

---

## **Binary Tree**
- A **Binary Tree** is a special type of tree.  
- Each node can have at most **two children**:
  - **Left Child**
  - **Right Child**  
- This structure makes binary trees the foundation of many advanced data structures (like BST, AVL, Heap).  

---

## Traversal Methods in Binary Trees
- **Preorder Traversal (Root → Left → Right)**  
- **Inorder Traversal (Left → Root → Right)**  
- **Postorder Traversal (Left → Right → Root)**  
- **Level Order Traversal (Breadth-First)**  

---

## Example (Binary Tree Structure)

```
        Root
       /    \
   Left      Right
   /  \        \
Leaf  Leaf     Leaf
```

- Root has no parent.  
- Leaves have no children.  
- Each node has at most 2 children.  


---
## Order

Order 
- depth-wise
    -pre-order
    -In-order
    -post-order
- level-wise
    -level-order


### depth-wise
  #### pre-order
    root left right
  #### In-order
    left root right
  #### post-order
    left right root
    