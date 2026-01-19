#include <bits/stdc++.h>
using namespace std;
int sz = 0;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    if (pos == sz)
    {
        insert_at_tail(head, tail, val);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    sz++;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
void print_left_right(Node *head, Node *tail)
{
    Node *temp_h = head;
    Node *temp_t = tail;
    cout << "L -> ";
    while (temp_h != NULL)
    {
        cout << temp_h->val << " ";
        temp_h = temp_h->next;
    }
    cout << endl;
    cout << "R -> ";
    while (temp_t != NULL)
    {
        cout << temp_t->val << " ";
        temp_t = temp_t->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int v, x;
        cin >> x >> v;
        if (x > sz || x < 0)
        {
            cout << "Invalid\n";
        }
        else
        {

            insert_at_any_pos(head, tail, x, v);
            print_left_right(head, tail);
        }
    }

    return 0;
}