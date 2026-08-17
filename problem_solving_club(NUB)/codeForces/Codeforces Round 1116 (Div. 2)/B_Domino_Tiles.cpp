#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
string pattern(int n, string tmp, int ch)
{
    int cnt = 0;
    while (tmp.size() < n)
    {

        if (cnt == 2)
        {
            cnt = 0;
            if (ch == '0')
                ch = '1';
            else
                ch = '0';
        }
        tmp += ch;
        cnt++;
    }
    return tmp;
}
bool check(int n, string s,string tmp){
    for (int i = 0; i < n; i++)
    {
        if(s[i]!='?'&&s[i]!=tmp[i])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tmp1 = "00", tmp2 = "11", tmp3 = "0", tmp4 = "1";

    tmp1 = pattern(n, tmp1, '1');
    tmp2 = pattern(n, tmp2, '0');
    tmp3 = pattern(n, tmp3, '1');
    tmp4 = pattern(n, tmp4, '0');

    int ans = 0;
    ans += (int)check(n, s, tmp1);
    ans += (int)check(n, s, tmp2);
    ans += (int)check(n, s, tmp3);
    ans += (int)check(n, s, tmp4);

    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}