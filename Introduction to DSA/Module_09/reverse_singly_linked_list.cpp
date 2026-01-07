#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void reverse_sll(Node* &head,Node *temp){
    if(temp->next==NULL){
        head = temp;
        return;
    }
    reverse_sll(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}
void insert_at_tail(Node *&head,Node* &tail,int val){
    Node *newNode = new Node(val);
    if (head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_sll(Node* head){
    for (Node *i = head; i !=NULL; i=i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if(val==-1)
            break;
        insert_at_tail(head, tail, val);
    }

    // print_sll(head);
    cout << head->val << endl;
    reverse_sll(head, head);
    cout << head->val << endl;
    // print_sll(head);
    return 0;
}