#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    vector<int> p(n, -1);
    bool possible = true;

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && s[j] == s[i])
            j++; 
        int len = j - i;
        if (len == 1)
        {
            possible = false;
            break;
        }
        
        for (int k = 0; k < len; k++)
        {
            p[i + k] = i + (k + 1) % len;
        }
        i = j;
    }

    if (!possible)
    {
        cout << -1 << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << p[i] + 1 << " ";
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}