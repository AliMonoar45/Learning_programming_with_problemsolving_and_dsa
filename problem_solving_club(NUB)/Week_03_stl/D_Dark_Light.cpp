#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    n %= 4;
    if (k == 0)
    {
        if (n == 0)
            cout << "Off\n";
        else
            cout << "Ambiguous\n";
    }
    else
    {
        if (n == 0)
            cout << "On\n";
        else
            cout << "Ambiguous\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        n = n % 4;
        if (k == 0)
        {

            if (n % 4 == 0)
                cout << "Off\n";
            else
                cout << "On\n";
        }
        else
        {

            if (n % 4 == 0)
                cout << "On\n";
            else
                cout << "Ambiguous\n";
        }
        // cout << n << endl;
        // solve();
    }

    return 0;
}