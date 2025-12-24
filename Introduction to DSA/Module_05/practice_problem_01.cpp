#include <bits/stdc++.h>
using namespace std;
int n_count = 0;
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
    n_count++;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int count_node(Node* head){
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        insert_at_tail(head, tail, n);
    }
    // print_linked_list(head);
    cout << count_node(head);

    return 0;
}