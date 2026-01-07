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
void insert_at_head(Node* &head,Node* &tail,int val){
    Node *newNode = new Node(val);
    if (head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
int size_of_sll(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool is_sorted_in_ascending_order(Node *head)
{
    bool result = true;
    Node *temp = head;
    while(temp->next!=NULL)
    {
        if (temp->val > temp->next->val)
        {
            return false;
        }
        temp = temp->next;
    }
    return result;
}
void print_sll(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_sll(temp->next);
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
    int sz = size_of_sll(head);
    // cout << sz << endl;
    // print_sll(head);
    bool res = is_sorted_in_ascending_order(head);
    if (res)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}