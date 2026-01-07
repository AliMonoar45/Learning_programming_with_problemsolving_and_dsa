#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    // deleteNode->prev->next = NULL;
    // tail = deleteNode->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    
    tail->next = NULL;
}

void print_dll(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_dll(temp->next);
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    print_dll(head);
    cout << endl;
    delete_at_tail(head, tail);
    print_dll(head);
    return 0;
}