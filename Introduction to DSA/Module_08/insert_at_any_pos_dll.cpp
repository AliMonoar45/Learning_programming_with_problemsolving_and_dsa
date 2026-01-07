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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;

    temp->next = newNode;
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
    insert_at_any_pos(head, tail, 2, 100);
    print_dll(head);
    return 0;
}