to insert into head there are 3 main steps
1: create a new node
2: assign the head address to new node
3: move head to new node

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

void insert_at_head(Node *&head, int val)
{
    // creat a new node
    Node *newNode = new Node(val);
    // connection to head
    newNode->next = head;
    //  the importent part move head pointer to the new node because now it is the head
    head = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
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

    insert_at_head(head, 100);

    // print_linked_list(head);

    

    return 0;
}
```