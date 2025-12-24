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

    // create new node
    Node *newNode = new Node(val);
    // if head not exist
    if (head==NULL)
    {
        head = newNode;
        return;
    }
    
    // now find the tail
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    // add at tail and move the tail
    temp->next = newNode;

}
void print_nodes(Node *head)
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
    // Node *head = new Node(10);
    Node *head = NULL;
    

    insert_at_tail(head, 100);

    print_nodes(head);

    return 0;
}