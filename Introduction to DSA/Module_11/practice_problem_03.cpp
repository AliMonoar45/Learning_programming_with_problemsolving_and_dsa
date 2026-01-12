#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st_1;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st_1.push(x);
    }

    stack<int> st_cpy;

    while (st_1.empty() == false)
    {
        st_cpy.push(st_1.top());
        st_1.pop();
    }

    while (st_cpy.empty() == false)
    {
        cout << st_cpy.top() << " ";
        st_cpy.pop();
    }

    return 0;
}