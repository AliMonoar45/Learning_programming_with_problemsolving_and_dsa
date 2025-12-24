#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next; // cause pointer is pointing a node;
};

int main()
{
    Node a, b, c;
    // manually
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl; // this print a
    cout << (*a.next).val << endl;// this print b using a with node connection
    cout << (*(*a.next).next).val << endl; // this print c using a with node connection
    // or we can use shortcut
    cout << a.next->next->val << endl;
    return 0;
}