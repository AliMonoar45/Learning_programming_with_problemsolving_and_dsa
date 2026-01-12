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
int size_of_dll(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void reverse_dll(Node *&head, Node *&tail)
{
    Node *left = head;
    Node *right = tail;

    while (left != right && right != left->prev) // TODO: implement logic

    {
        swap(left->val, right->val);
        left = left->next;
        right = right->prev;
    }
}
void print_backward(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
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
    newNode->prev = tail;
    tail = newNode;
}

void print_forword(Node *head)
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->val << " ";
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
    reverse_dll(head, tail);
    print_forword(head);
    // print_backward(tail);

    return 0;
}