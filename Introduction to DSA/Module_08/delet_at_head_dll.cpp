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
void delete_at_head(Node* &head,Node *&tail){
    Node *deleteNode = head;
    head = deleteNode->next;
    delete deleteNode;
    if (head==NULL)
    {
        tail = NULL;
        return;
    }
    
    head->prev = NULL;
}

void print_dll(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_dll(temp->next);
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    print_dll(head);
    cout << endl;
    delete_at_head(head,tail);
    print_dll(head);
    return 0;
}