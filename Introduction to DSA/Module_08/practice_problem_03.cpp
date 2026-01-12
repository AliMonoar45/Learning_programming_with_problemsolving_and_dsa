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
bool is_palindrome(Node *head, Node *tail)
{
    Node *l = head;
    Node *r = tail;
    while (l != r && r != l->prev)
    {
        if (l->val != r->val)
        {
            return false;
        }
        l = l->next;
        r = r->prev;
    }
    return true;
}
void print_dll(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    bool res = is_palindrome(head, tail);
    if (res)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // print_dll(head);

    return 0;
}