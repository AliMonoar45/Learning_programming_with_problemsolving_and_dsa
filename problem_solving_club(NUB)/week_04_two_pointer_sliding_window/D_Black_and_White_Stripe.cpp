#include <bits/stdc++.h>
using namespace std;
void solve()
{
    // TLE
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0;
    int ans = INT_MAX;
    while (r < n)
    {
        if (r - l + 1 == k)
        {
            int w = 0;
            for (int i = l; i <= r; i++)
            {
                if (s[i] == 'W')
                    w++;
            }
            ans = min(ans, w);
            l++, r++;
        }
        else
        {
            r++;
        }
    }
    cout << ans << endl;
}
void solve_2()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0;
    int w = 0, b = 0, ans = INT_MAX;
    while (r < n)
    {   
        // calculate white and black to scope
        if (s[r] == 'B')
            b++;
        else
            w++;
            // hit the window
        if (r - l + 1 == k)
        {   
            // kaj ans make kora
            ans = min(ans, w);
            //srinking l ans remove contribution
            if (s[l] == 'W')
                w--;
            else
                b--;
            // move l pointer
            l++;
        }
        //move r pointer to make window
        r++;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = INT_MAX;
        int l = 0, r = 0;
        int w = 0, b = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                w++;
            else
                b++;
            if (r - l + 1 == k)
            {
                ans = min(ans, w);
                if (s[l] == 'W')
                    w--;
                else
                    b--;
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}