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
void print_dll(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_backword(Node *head)
{
    if (head == NULL)
        return;
    print_backword(head->next);
    cout << head->val << " ";
}
int size_dll(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
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
    newNode->prev = tail;
    tail = newNode;
}

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
void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    int sz = size_dll(head);

    if (idx > sz)
    {
        cout << "Invalid";
        return;
    }
    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        print_dll(head);
        print_backword(head);
        return;
    }
    if (idx == sz)
    {
        insert_at_tail(head, tail, val);
        print_dll(head);
        print_backword(head);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    print_dll(head);
    print_backword(head);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        insert_at_any_pos(head, tail, idx, val);
        cout << endl;
    }

    return 0;
}