# To insert into tail we need to do those steps:
 1. First need to create a new node
 2. now we just have access to head so we need to find the tail or last node which we can find using a loop till temp.next != Null cause we know that the last node has address null
 3. we just make the tail to the new node 
```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    // create a new node
    Node *newNode = new Node(val);
    // now need to find the last node
    Node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    // now move the tail to new node
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // connection
    head->next = a;
    a->next = b;

    insert_at_tail(head, 100);

    print_linked_list(head);

    return 0;
}
```
output
```
10
20
30
100
```
but there is  a problem which is if the head is empty so we have to fix this

