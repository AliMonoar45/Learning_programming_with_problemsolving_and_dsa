/* int n;
cin >> n;
string s;
cin >> s;
int ans = INT_MAX;
for (char i = 'a'; i <= 'z'; i++)
{
    int l = 0;
    int r = n - 1;
    int cnt = 0;
    bool flag = true;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            l++, r--;
        }
        else
        {
            if (s[l] == i)
            {
                l++, cnt++;
            }
            else if (s[r] == i)
            {
                r--, cnt++;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        ans = min(ans, cnt);
}
if (ans == INT_MAX)
    cout << -1 << endl;
else
{
    cout << ans << endl;
}
 */

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = INT_MAX;
   
    for (char c = 'a'; c <= 'z'; c++)
    {
        int l = 0, r = n - 1, op = 0;
        bool flag = true;
        while (l < r)
        {
            if(s[l]==s[r])
                l++, r--;
            else{
                if(s[l]==c){
                    l++;
                    op++;
                }else if (s[r]==c)
                {
                    r--;
                    op++;
                }else{
                    flag = false;
                    break;
                }
                
            }
        }
        if(flag)
            ans = min(ans, op);
    }
    if(ans==INT_MAX)
        ans = -1;

    cout << ans << endl;
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