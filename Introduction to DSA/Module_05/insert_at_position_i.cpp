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
/**
 * @brief Insert a new node at a given position in the linked list.
 *
 * @param head Reference to the head pointer of the linked list.
 * @param idx  Position (0-based index) where the new node should be inserted.
 * @param val  Value to store in the new node.
 *
 * This function creates a new node with the given value and inserts it
 * at the specified index. The head pointer is passed by reference so
 * that updates persist outside the function.
 */
void insert_at_position(Node *&head,int idx, int val)
{

    // create new node
    Node *newNode = new Node(val);
    // find the index to insert value
    Node *temp = head;
    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    // first do next node address to new node address otherwise we lost the next part in memory
    newNode->next = temp->next;
    // in previous node of the index we add new node address
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_position(head, 2,100);
    insert_at_position(head, 2, 300);

    print_nodes(head);

    return 0;
}