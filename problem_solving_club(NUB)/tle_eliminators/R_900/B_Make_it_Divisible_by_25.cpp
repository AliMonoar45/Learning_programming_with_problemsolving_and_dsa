#include <bits/stdc++.h>
using namespace std;

int totcount(string s, string t)
{
    int count = 0;
    int l = s.length();
    while (s.length() > 0 && t.length() > 0)
    {
        if (s.back() == t.back())
        {
            t.pop_back();
        }
        else
        {
            count++;
        }
        s.pop_back();
    }
    if (t.length() == 0)
    {
        return count;
    }
    return l;
}
void solve(){
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << s.length() << '\n';
    }
    else
    {
        cout << min({totcount(s, "00"), totcount(s, "25"), totcount(s, "50"), totcount(s, "75")}) << '\n';
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}