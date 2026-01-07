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
    cout << head->val << " ";
    print_sll(head->next);
}
int print_max(Node *head)
{
    int mx = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > mx)
        {
            mx = i->val;
        }
    }
    return mx;
}
int print_min(Node *head)
{
    int mn = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < mn)
        {
            mn = i->val;
        }
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    // print_sll(head);
 
    int mx=print_max(head);
    int mn=print_min(head);
    cout << mx - mn;

    return 0;
}