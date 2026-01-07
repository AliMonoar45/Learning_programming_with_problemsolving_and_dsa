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
int size_of_sll(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
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
    tail->next = newNode;
    tail = newNode;
}

void delete_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
        return;
    int sz = size_of_sll(head);
    if (idx < 0 || idx >= sz)
    {
        return;
    }
    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }

        delete deleteNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    // temp->next = deleteNode->next;
    temp->next = temp->next->next;
    if (deleteNode == tail)
    {
        tail = temp;
    }

    delete deleteNode;
}
void print_sll(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << " ";
    print_sll(head->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        if (x == 0)
            insert_at_head(head, tail, val);
        else if (x == 1)
            insert_at_tail(head, tail, val);
        else if (x == 2)
        {
           /*  int sz = size_of_sll(head);
            if (val > sz)
            {
                continue;
            }
            else */
                delete_at_any_pos(head, tail, val);
        }

        print_sll(head);
        cout << endl;
    }

    return 0;
}