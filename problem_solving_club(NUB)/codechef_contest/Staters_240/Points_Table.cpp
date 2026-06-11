#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x > a)
        cout << "Alice";
    else if (a > x)
    {
        cout << "Bob";
    }
    else
    {
        if (y > b)
        {
            cout << "Alice";
        }
        else if (b > y)
        {
            cout << "Bob";
        }
        else
            cout << "Alice";
    }

    return 0;
}