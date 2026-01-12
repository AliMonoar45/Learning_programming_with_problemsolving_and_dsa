
# 📚 Stack Data Structure in C++
- Abstract Data Structure
- Higher level Data Structure

A **stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
- **Push** → Insert element at the top.  
- **Pop** → Remove element from the top.  
- **Top/Peek** → Access the element at the top.  
- **Empty** → Check if stack is empty.  
- **Size** → Get number of elements.

---

## 1️⃣ Stack using Doubly Linked List

```cpp
#include <bits/stdc++.h>
using namespace std;
#define nl endl

class Node {
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) { // O(1)
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL) {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    MyStack st;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << nl;
        st.pop();
    }
    return 0;
}
```

---

## 2️⃣ Stack using `vector`

```cpp
#include <bits/stdc++.h>
using namespace std;
#define nl endl

class MyStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }
    void pop() {
        v.pop_back();
    }
    int top() {
        return v.back();
    }
    int size() {
        return v.size();
    }
    bool empty() {
        return v.empty();
    }
};

int main() {
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << nl; st.pop();
    cout << st.top() << nl; st.pop();
    cout << st.top() << nl; st.pop();

    if (!st.empty())
        cout << st.top() << nl;

    return 0;
}
```

---

## 3️⃣ Stack using `list`

```cpp
#include <bits/stdc++.h>
using namespace std;
#define nl endl

class MyStack {
public:
    list<int> l;

    void push(int val) {
        l.push_back(val);
    }
    void pop() {
        l.pop_back();
    }
    int top() {
        return l.back();
    }
    int size() {
        return l.size();
    }
    bool empty() {
        return l.empty();
    }
};

int main() {
    MyStack st;
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << nl;
        st.pop();
    }
    return 0;
}
```

---

## 4️⃣ Stack using STL `stack`

```cpp
#include <bits/stdc++.h>
using namespace std;
#define nl endl

int main() {
    stack<int> st;

    st.push(100);
    st.push(200);
    st.push(300);

    cout << "Size: " << st.size() << nl;
    cout << "Top: " << st.top() << nl;

    st.pop();
    cout << "Top after pop: " << st.top() << nl;

    if (st.empty()) cout << "Stack is empty" << nl;
    else cout << "Stack is not empty" << nl;

    return 0;
}
```

---

## 📝 Summary
- **Doubly Linked List** → Manual memory management, O(1) push/pop, flexible.  
- **Vector** → Simple, contiguous memory, O(1) amortized push/pop.  
- **List** → Doubly linked list under the hood, O(1) push/pop.  
- **STL stack** → Ready-to-use, highly optimized, recommended for most cases.

---


