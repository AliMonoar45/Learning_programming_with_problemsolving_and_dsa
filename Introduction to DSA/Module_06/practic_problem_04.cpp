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
bool insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    int sz = size_of_sll(head);
    if (sz < idx)
    {
        // cout << "invalid" << endl;
        return false;
    }
    Node *newNode = new Node(val);
    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }
    if (idx == sz)
    {
        tail->next = newNode;
        tail = newNode;
        return true;
    }

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return true;
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
void print_max(Node *head)
{
    int mx = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > mx)
        {
            mx = i->val;
        }
    }
    cout << mx;
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

    int q;
    cin >> q;
    while (q--)
    {
        int idx, value;
        cin >> idx >> value;
        bool res = insert_at_any_pos(head, tail, idx, value);
        if (res)
        {
            print_sll(head);
            cout << endl;
        }else
        {
            cout << "Invalid" << endl;
        }
        
        
    }
    

    return 0;
}