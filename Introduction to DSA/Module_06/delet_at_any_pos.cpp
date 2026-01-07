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
void print_sll(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << endl;
    print_sll(head->next);
}
void delete_at_any_pos(Node *&head, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    
    
    Node *deleteNode = temp->next;
    // temp->next = deleteNode->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    delete_at_any_pos(head, 3);

    print_sll(head);

    return 0;
}