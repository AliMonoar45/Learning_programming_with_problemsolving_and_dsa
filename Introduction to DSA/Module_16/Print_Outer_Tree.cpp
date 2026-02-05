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
        left = NULL;
        right = NULL;
    }
};

Node *level_order_input()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft = (l == -1 ? NULL : new Node(l));
        Node *myRight = (r == -1 ? NULL : new Node(r));
        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void left_bound(Node *root){
    if(root==NULL) return;
    if (root->left)
    {
        left_bound(root->left);
    }else if (root->right)
    {
        left_bound(root->right);
    }
    cout << root->val << " ";
}
void right_bound(Node* root){
    if(root==NULL) return;
    cout << root->val << " ";
    if (root->right)
    {
        right_bound(root->right);
    }
    else if (root->left)
    {
        right_bound(root->left);
    }
    
    
}
int main()
{
    Node *root = level_order_input();
    left_bound(root->left);
    cout << root->val << " ";
    right_bound(root->right);
    return 0;
}
