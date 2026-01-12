#include <bits/stdc++.h>
using namespace std;
void print_list(list<int> l)
{
    for (int val : l)
        cout << val << " ";

    cout << endl;
}
bool is_same_list(list<int> l1, list<int> l2)
{
    int sz1 = l1.size();
    int sz2 = l2.size();

    if (sz1 != sz2)
    {
        return false;
    }
    for (auto i = l1.begin(), j = l2.begin(); i != l1.end() && j != l2.end(); i++, j++)
    {
        if (*i != *j)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    list<int> l1;
    list<int> l2;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        l1.push_back(val);
    }
    int val2;
    while (1)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        l2.push_back(val2);
    }
    // print_list(l1);
    // print_list(l2);
    if (is_same_list(l1, l2) == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}