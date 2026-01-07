#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
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
    tail = newNode;
}
void print_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout << temp->val << " ";
}
void print_sll(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_sll(temp->next);
}
int size_of_sll(Node *head)
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
bool check_duplicate_free(Node *&head)
{
    // bool result = false;
    int max_val = 100;
    int sz = size_of_sll(head);
    vector<int> free(max_val + 1, 0);
    Node *temp = head;
    while (temp != NULL)
    {
        free[temp->val]++;
        // cout << free[temp->val] << " ";
        temp = temp->next;
    }
    for (int i = 0; i < max_val; i++)
    {
        if (free[i] > 1)
        {
            return true;
        }
    }
    return false;
}
bool check_duplicate_free_another(Node *&head)
{
    int max_val = 100;
    vector<int> free(max_val + 1, 0);

    Node *temp = head;
    while (temp != NULL)
    {
        free[temp->val]++;
        if (free[temp->val] > 1)
            return true;
        temp = temp->next;
    }
    return false;
}
bool check_duplicate_nested_loop(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->val == temp2->val)
            {
                return true;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    // print_sll(head);
    bool flag = check_duplicate_free(head);
    bool flag2 = check_duplicate_free_another(head);
    bool flag3 = check_duplicate_nested_loop(head);
    if (flag3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}