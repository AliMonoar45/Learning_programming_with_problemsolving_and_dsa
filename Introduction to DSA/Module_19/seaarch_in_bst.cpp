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
        // first ber kore ana
        Node *parent = q.front();
        q.pop();

        // second oi node nea kaj kora
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

        parent->left = myLeft;
        parent->right = myRight;
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}
void levelOrder(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();
        cout << cur->val << " ";
        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }
}
bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (val > root->val)
    {
        return search(root->right, val);
    }
    else
    {
        return search(root->left, val);
    }
}
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    // levelOrder(root);
    if (search(root, val))
        cout << "found\n";
    else
        cout << "not found\n";
    return 0;
}