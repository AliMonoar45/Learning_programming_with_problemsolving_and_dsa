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
void print_dll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *find_station(Node *head, Node *tail, string q_station)
{

    Node *found = NULL;
    for (Node *it = head; it != NULL; it = it->next)
    {
        if (it->val == q_station)
        {
            // cout << it->val << " ";
            found = it;

            break;
        }
    }
    return found;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (1)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }
    string command;
    cin >> command;
    string q_station;
    cin >> q_station;
    Node *is_exist = find_station(head, tail, q_station);

    if (command == "visit")
    {
        
        if (is_exist == NULL)
        {
            cout << "station not found\n";
        }
        else
            cout << is_exist->val << endl;

        // find if exist
    }
    else if (command == "next")
    {
        // next of current station
        if (is_exist == NULL)
        {
            cout << "station not found\n";
        }
        else
        {
            if (is_exist->next == NULL)
            {
                cout << "No next station\n";
            }
            else
            {

                cout << is_exist->next->val << endl;
            }
        }
    }
    else if (command == "prev")
    {
        // previous of current
        if (is_exist == NULL)
        {
            cout << "station not found\n";
        }
        else
        {
            if (is_exist->prev == NULL)
            {
                cout << "No prev station\n";
            }
            else
            {

                cout << is_exist->prev->val << endl;
            }
        }
    }
    else
    {
        cout << "Wrong command" << endl;
    }

    // print_dll(head);
    return 0;
}