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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// Tortoise and Hare or slow fast

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    // start cycle

    tail->next = a;
    
    // find the cycle
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL&&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            // cycle detected
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Cycle found";
    }
    else
    {
        cout << "Cycle not found";
    }

    return 0;
}