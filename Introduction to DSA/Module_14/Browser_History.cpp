#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{

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
Node *visit_add(Node *&head, Node *&tail, string add)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == add)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;

        insert_at_tail(head, tail, s);
    }
    int q;
    cin >> q;
    Node *curr = NULL;
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string address;
            cin >> address;
            Node *found = visit_add(head, tail, address);
            if (found == NULL)
                cout << "Not Available\n";
            else
            {
                curr = found;
                cout << curr->val << endl;
            }
        }
        else if (command == "next")
        {
            if (curr == NULL || curr->next == NULL)
            {
                cout << "Not Available\n";
            }
            else
            {
                cout << curr->next->val << endl;
                curr = curr->next;
            }
        }
        else if (command == "prev")
        {
            if (curr == NULL || curr->prev == NULL)
            {
                cout << "Not Available\n";
            }
            else
            {
                cout << curr->prev->val << endl;
                curr = curr->prev;
            }
        }
    }

    return 0;
}