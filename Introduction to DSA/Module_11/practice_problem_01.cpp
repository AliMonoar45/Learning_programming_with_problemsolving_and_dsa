#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    int n;
    cin >> n;

    MyStack st_1;
    MyStack st_2;

    while (n--)
    {
        int x;
        cin >> x;
        st_1.push(x);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st_2.push(x);
    }
    if (st_1.size() != st_2.size())
    {
        cout << "NO";
        return 0;
    }
    while (!st_1.empty() && !st_2.empty())
    {

        if (st_1.top() != st_2.top())
        {
            cout << "NO";
            return 0;
        }
        st_1.pop();
        st_2.pop();
    }
    cout << "YES";

    return 0;
}