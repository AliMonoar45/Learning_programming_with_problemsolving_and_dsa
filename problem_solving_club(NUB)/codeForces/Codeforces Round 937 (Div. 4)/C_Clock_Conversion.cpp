#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    int mm = (s[3] - '0') * 10 + (s[4] - '0');

    string period;
    int hour12;

    if (hh == 0)
    {
        hour12 = 12;
        period = "AM";
    }
    else if (hh < 12)
    {
        hour12 = hh;
        period = "AM";
    }
    else if (hh == 12)
    {
        hour12 = 12;
        period = "PM";
    }
    else
    {
        hour12 = hh - 12;
        period = "PM";
    }

    if (hour12 < 10)
        cout << "0";
    cout << hour12 << ":";
    if (mm < 10)
        cout << "0";
    cout << mm << " " << period << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
