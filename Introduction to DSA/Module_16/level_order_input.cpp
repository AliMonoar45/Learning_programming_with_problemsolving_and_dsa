#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *root)
{
    queue<Node *> q;
    if (root==NULL)
    {
        cout << "No tree";
        return;
    }
    
    q.push(root);

    while (!q.empty())
    {
        // ber kore ana
        Node *f = q.front();
        q.pop();
        // node ke nea kaj
        cout << f->val << " ";
        //  children push
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
    q.push(root);
    while (!q.empty())
    {
        // oi node ber kore ana
        Node *p = q.front();
        q.pop();

        // node nea kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // connection
        p->left = myLeft;
        p->right = myRight;

        // children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}