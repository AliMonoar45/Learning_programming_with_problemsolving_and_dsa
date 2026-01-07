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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    vector<int> fre(1000 + 1, 0);
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        if (fre[val]>0)
        {
            /* code */
            continue;
        }else
        {
            /* code */
            fre[val]++;
            insert_at_tail(head, tail, val);
        }
        
        
    }

    print_sll(head);

    

    return 0;
}