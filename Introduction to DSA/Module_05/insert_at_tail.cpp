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
void insert_at_tail(Node *&head, int val)
{
    // create a new node
    Node *newNode = new Node(val);
    // check if head dose not exist then the new node is head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // now need to find the last node
    Node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    // now move the tail to new node
    temp->next = newNode;
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
int main()
{
    Node *head = NULL;

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // // connection
    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 100);

    print_linked_list(head);

    return 0;
}