#include <bits/stdc++.h>
using namespace std;
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
int size_of_dll(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool is_same_dll(Node *head_1, Node *head_2, Node *tail_1, Node *tail_2)
{
    int size_1 = size_of_dll(head_1);
    int size_2 = size_of_dll(head_2);
    if (size_1 != size_2)
        return false;
    Node *temp_1 = head_1;
    Node *temp_2 = head_2;
    while (temp_1 != NULL && temp_2 != NULL)
    {
        if (temp_1->val != temp_2->val)
            return false;
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }

    return true;
};
void insert_at_tail(Node *&head, Node *&tail, int val)
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

void print_forword(Node *head)
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->val << " ";
    }
    cout << endl;
}
int main()
{
    Node *head_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_1 = NULL;
    Node *tail_2 = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head_1, tail_1, val);
    }

    while (1)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head_2, tail_2, val);
    }
    // print_forword(head_1);
    // print_forword(head_2);
    // bool res = is_same_dll(head_1, head_2, tail_1, tail_2);
    // cout << res << endl;
    if (is_same_dll(head_1, head_2, tail_1, tail_2))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}