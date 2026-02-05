# 🌳 Tree Data Structure

## What is a Tree?
- A **Tree** is a non-linear data structure that represents elements in a **hierarchical** manner.  
- It begins with a **root node** and ends with **leaf nodes**.  
- Between root and leaves, there are **branches (subtrees)** that connect nodes.  
- Unlike a real-life tree (which grows downward), in computer science we usually draw trees with the root at the **top** and leaves at the **bottom**. Rotating it doesn’t change its logical meaning.

---

## Key Characteristics
- **Root Node**: The topmost node of the tree.  
- **Leaf Node**: Nodes with no children.  
- **Parent–Child Relationship**: Each node (except root) has a parent, and may have zero or more children.  
- **Subtree**: A smaller tree formed from any node and its descendants.  
- **Height of Tree**: The longest path from root to a leaf.  
- **Depth of Node**: Distance from root to that node.  

---

## Types of Data Structures
- **Linear Data Structures**: Elements are arranged sequentially.  
  - Examples: **Array, Linked List, Stack, Queue**  
- **Non-Linear Data Structures**: Elements are arranged hierarchically or in networks.  
  - Examples: **Tree, Graph**

---

## Why Trees?
- Efficient for representing **hierarchical data** (e.g., file systems, organization charts).  
- Useful in searching and sorting (e.g., **Binary Search Tree**).  
- Basis for advanced structures like **Heaps, Tries, AVL Trees, B-Trees**.  

---

## Common Types of Trees
| Tree Type                    | Description                             | Example Use             |
| ---------------------------- | --------------------------------------- | ----------------------- |
| **Binary Tree**              | Each node has at most 2 children        | Expression trees        |
| **Binary Search Tree (BST)** | Left child < Parent < Right child       | Fast searching          |
| **AVL Tree**                 | Self-balancing BST                      | Database indexing       |
| **Heap**                     | Complete binary tree with heap property | Priority queues         |
| **Trie (Prefix Tree)**       | Stores strings by prefixes              | Autocomplete systems    |
| **B-Tree**                   | Generalized BST with multiple children  | File systems, databases |

---

