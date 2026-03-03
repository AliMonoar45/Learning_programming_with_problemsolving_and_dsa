# Introduction to Graphs: Comparing Trees and Graphs

Graphs are a fundamental data structure in computer science.  
To understand them better, it helps to compare graphs with **trees**, which are a special type of graph.

---

## 1. Edges
- **Tree**: Each pair of nodes is connected by exactly one edge.  
- **Graph**: Nodes can be connected by multiple edges, including parallel edges.

---

## 2. Paths
- **Tree**: There is only one unique path between any two nodes.  
- **Graph**: Multiple paths may exist between two nodes.

---

## 3. Cycles
- **Tree**: Trees are acyclic (they do not contain cycles).  
- **Graph**: Graphs can contain cycles (cyclic graphs) or be acyclic.

---

## 4. Direction of Edges
- **Tree**: Edges usually represent hierarchy, flowing from **parent → child**.  
- **Graph**: Edges can be **directed** or **undirected**, allowing movement in multiple ways.

---

## Key Takeaway
- A **tree** is a restricted form of a graph: connected, acyclic, and hierarchical.  
- A **graph** is more general: it can be cyclic, have multiple paths, and allow complex relationships.
---
# Types of Graph

Graphs can be classified in several ways based on their properties.

---

## Based on Direction

1. **Directed Graph**
2. **Undirected Graph**

### Directed Graph
A graph in which edges have a specific direction (from one node to another).  
Example: `A → B` means you can go from A to B, but not necessarily from B to A.

### Undirected Graph
A graph in which edges do not have direction.  
In undirected graphs, we assume movement is possible both ways.  
Example: `A — B` means you can go from A to B and also from B to A.

---

## Based on Weight (Cost or Time)

1. **Weighted Graph**
2. **Unweighted Graph**

### Weighted Graph
Edges carry weights (such as cost, distance, or time).  
Example: `A —(5)— B` means the edge between A and B has weight 5.

### Unweighted Graph
Edges do not have weights; all edges are considered equal.

---

## Based on Cycle

1. **Cyclic Graph**
2. **Acyclic Graph**

### Cyclic Graph
A graph that contains at least one cycle (a path that starts and ends at the same node).

### Acyclic Graph
A graph with no cycles.  
Example: **Trees** are acyclic graphs.

---

## Summary

- **Direction**: Directed vs. Undirected  
- **Weight**: Weighted vs. Unweighted  
- **Cycle**: Cyclic vs. Acyclic  
- **Note**: In an **undirected graph**, a cycle requires at least **3 nodes**. With fewer than 3 nodes, no cycle is possible.
