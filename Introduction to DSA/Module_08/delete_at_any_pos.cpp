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
void delete_at_any_pos(Node *&head, Node *&tail,int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
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

    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;
    print_dll(head);
    cout << endl;
    delete_at_any_pos(head, tail,3);
    print_dll(head);
    return 0;
}