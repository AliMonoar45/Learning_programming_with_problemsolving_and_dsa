#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (2 * x >= y)
        {

            cout << n * x << endl;
        }
        else
        {
            if (n % 2 == 0)
                cout << (n / 2) * y << endl;
            else
                cout << (n / 2) * y + x << endl;
        }

        // my solution
        /* int in_x,
            in_y;

        in_x = n * x;
        in_y = (n / 2 * y) + (n % 2 * x);
        cout <<max(in_x,in_y) << endl; */
    }

    return 0;
}