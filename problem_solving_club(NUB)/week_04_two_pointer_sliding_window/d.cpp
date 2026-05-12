#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b;
        cin >> a >> b;
        double small = 10 * 10;
        double big = 15 * 15;
        double sm = small * b;
        double bi = big * a;
        if (sm == bi)
            cout << "Equal\n";
        else if (sm > bi)
        {
            cout << "Small\n";
        }
        else
            cout << "Large\n";
    }

    return 0;
}