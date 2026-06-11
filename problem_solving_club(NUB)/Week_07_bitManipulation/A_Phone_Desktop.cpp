#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        int s = y / 2;
        int left = s * 7;
        if (y % 2 != 0)
        {
            s++;
            left += 11;
        }
        if (x > left)
        {
            x -= left;
            s += x / 15;
            if (x % 15 != 0)
            {
                s++;
            }
        }
        cout << s << endl;
    }

    return 0;
}