#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e';
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    int i = n - 1;

    while (i >= 0)
    {
        if (!ans.empty())
        {
            ans.push_back('.');
        }

        if (isVowel(s[i]))
        {
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            i -= 2;
        }
        else
        {
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            ans.push_back(s[i - 2]);
            i -= 3;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}