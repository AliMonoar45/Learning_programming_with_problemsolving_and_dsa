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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    //  c no need we use constructor to make all address is null so c is already null
    // we can not use head it will lose then we lose the full list
    /*   while (head != NULL)
      {
          cout << head->val << endl;
          head = head->next;
      }

      while (head != NULL)
      {
          cout << head->val << endl;
          head = head->next;
      } */

    // the way
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}