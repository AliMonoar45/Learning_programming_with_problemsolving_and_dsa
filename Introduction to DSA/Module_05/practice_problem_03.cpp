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
void insert_at_tail(Node* &head,Node* &tail,int val){
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
int size_of_sll(Node* head){
    int count = 0;
    Node *temp = head;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_middle(Node* head){
    int sz = size_of_sll(head);
    int mid = sz / 2;

    Node *temp = head;

    if (sz%2!=0)
    {
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }else
    {
        for (int i = 0; i < mid-1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
    
    
}
void print_sll(Node *head){
    Node *temp = head;
    if (temp==NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_sll(temp->next);
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin>>val)
    {
        insert_at_tail(head, tail, val);
    }
    int sz = size_of_sll(head);
    // cout << sz << endl;
    print_middle(head);
    // print_sll(head);
    return 0;
}