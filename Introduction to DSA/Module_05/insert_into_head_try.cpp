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
void insert_at_head(Node* &head,int val){
        // create new node
        Node *newNode = new Node(val);
        // address of head into node
        newNode->next = head;
        // now move the head to new node
        head = newNode;
}
void print_nodes(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    
    
}
int main() {
    Node *head = new Node(10);

    insert_at_head(head, 100);
    
    print_nodes(head);

    return 0;
}