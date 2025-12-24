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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating a new node
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
void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    if (head == NULL)
    {
        insert_at_head(head, tail, val);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        if (temp == NULL)
            break;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "invalid idx" << endl;
        return;
    }
    Node *newNode = new Node(val);
    if (temp->next == NULL)
    {
        temp->next = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    return 0;
}