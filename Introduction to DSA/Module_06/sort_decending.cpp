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
    cout << head->val << " ";
    print_sll(head->next);
}
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
void sort_linked_list(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    while (1)
    {
        int val;
        cin >> val;
        if (val==-1)
        {
            break;
        }
        
        insert_at_tail(head, tail, val);
    }
    sort_linked_list(head);
    print_sll(head);

    return 0;
}