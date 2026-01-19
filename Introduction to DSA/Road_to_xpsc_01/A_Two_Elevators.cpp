#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a==1)
        {
            cout << 1 << endl;
            continue;
        }
        
        int t_1 = a - 1;
        int t_2;
        if (c > b)
        {
            t_2 = ((c - b) + c) - 1;
        }
        else if (c < b)
        {
            t_2 = (b - c)+(c-1);
        }
        else
        {
            t_2 = b - 1;
        }

        if (t_1 < t_2)
            cout << 1;
        else if (t_2 < t_1)
            cout << 2;
        else
            cout << 3;

        cout << endl;
    }

    return 0;
}