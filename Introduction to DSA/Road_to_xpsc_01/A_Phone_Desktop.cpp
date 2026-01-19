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

        int screen = y / 2;
        int left = screen * 7;
        if (y % 2 != 0)
        {
            screen++;
            left += 11;
        }
        if (x > left)
        {
            x -= left;
            screen += x / 15;
            if (x % 15 != 0)
            {
                screen++;
            }
        }
        cout << screen << endl;
    }

    return 0;
}