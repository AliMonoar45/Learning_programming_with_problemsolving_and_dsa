#include <bits/stdc++.h>
using namespace std;
//  join support session
int main()
{
    int n;
    cin >> n;

    stack<int> st1;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;

    stack<int> st2;
    while (m--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    if (st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st2.top())
        {
            cout << "NO";
            return 0;
        }
        st1.pop();
        st2.pop();
    }
    cout << "YES";

    return 0;
}