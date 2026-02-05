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
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
Node *level_order_input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
        return NULL;
    }
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
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

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
int count_leaf_nodes_in_tree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
        return 1;
    int l = count_leaf_nodes_in_tree(root->left);
    int r = count_leaf_nodes_in_tree(root->right);
    return l + r;
}
int main()
{
    Node *root = level_order_input();
    level_order(root);
    cout << endl;
    cout << "leaf Nodes in tree : " << count_leaf_nodes_in_tree(root);
    return 0;
}