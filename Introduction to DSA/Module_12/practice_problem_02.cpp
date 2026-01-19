#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int m;
    cin >> m;
    stack<int> st;
    while (m--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    while (!q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES";

    return 0;
}