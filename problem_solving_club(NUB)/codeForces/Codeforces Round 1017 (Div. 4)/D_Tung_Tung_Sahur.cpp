#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES\n";
        return;
    }
    if (t.size() < s.size())
    {
        cout << "NO\n";
        return;
    }
    if (s.size() == t.size() && s != t)
    {
        cout << "NO\n";
        return;
    }
    int ptr = 0;
    int ptr_2 = 0;

    while (ptr < s.size()&&ptr_2<t.size())
    {
        int check = 0;
        if (s[ptr] == 'L')
        {

            while (ptr < s.size() && s[ptr] == 'L')
            {
                check ++;
                ptr++;
            }
            int cnt = 0;
            while (ptr_2 < t.size() && t[ptr_2] == 'L')
            {
                cnt++;
                ptr_2++;
            }

            if (cnt < check || cnt > 2 * check)
            {
                cout << "NO\n";
                return;
            }
        }
        else 
        {
            while (ptr < s.size() && s[ptr] == 'R')
            {
                check ++;
                ptr++;
            }
            int cnt = 0;
            while (ptr_2 < t.size() &&t[ptr_2] == 'R')
            {
                cnt++;
                ptr_2++;
            }

            if (cnt < check || cnt > 2 * check)
            {
                cout << "NO\n";
                return;
            }
            
        }
    }
    if (ptr == s.size() && ptr_2 == t.size())
        cout << "YES\n";
    else
        cout << "NO\n";
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