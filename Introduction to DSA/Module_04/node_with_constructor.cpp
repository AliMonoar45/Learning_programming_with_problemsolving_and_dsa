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
int main() {
    Node a(10), b(20), c(40);

    // creating connection
    a.next = &b;
    b.next = &c;


    cout << a.val << endl;                 // this print a
    cout << (*a.next).val << endl;         // this print b using a with node connection
    //cout << (*(*a.next).next).val << endl; // this print c using a with node connection
    // or we can use shortcut
    cout << a.next->next->val << endl;

    return 0;
}