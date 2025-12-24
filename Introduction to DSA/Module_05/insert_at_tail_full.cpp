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
void insert_at_tail_only_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head==NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
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
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tail(head, tail, 10);
    print_linked_list(head);
    return 0;
}