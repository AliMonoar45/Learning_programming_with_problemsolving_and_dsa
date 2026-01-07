/* Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input
Sample Output
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
YES
5 1 4 5 -1
5 1 4 -1
NO

 */

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
 int size_of_sll(Node* head){
     int count = 0;
     while (head!=NULL)
     {
         count++;
         head = head->next;
     }
     return count;
  }
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
  void print_sll(Node* head){
    if (head==NULL)
    {
        return;
    }
    cout << head->val << " ";
    print_sll(head->next);
  }
 int main() {
     Node *head = NULL;
     Node *tail = NULL;
     int val;
     while (true)
     {
         cin >> val;
         if(val==-1) break;
         insert_at_tail(head, tail, val);
     }

     
     Node *head2 = NULL;
     Node *tail2 = NULL;
     while (true)
     {
         cin >> val;
         if (val == -1)
             break;
         insert_at_tail(head2, tail2, val);
     }

     int node1_sz = size_of_sll(head);
     int node2_sz = size_of_sll(head2);

     if(node1_sz==node2_sz)
         cout << "YES";
         else
             cout << "NO";
    //  print_sll(head);
    //  cout << endl;
    //  print_sll(head2);

     return 0;
 }