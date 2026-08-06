#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve2(){
    string s;
    cin >> s;
    s.erase(find(s.begin(), s.end(), '0'));
    s.erase(find(s.begin(), s.end(), '1'));
    cout << s << nl;
}
void solve()
{
    string s;
    cin >> s;
    string an = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            string tm = "";
            for (int j = 0; j < s.length(); j++)
            {
                if (j != i)
                {
                    tm += s[j];
                }
            }
            bool fg = false;
            string pos = "";
            for (int j = 0; j < tm.length(); j++)
            {
                if (tm[j] == '1' && !fg)
                {
                    fg = true;
                }
                else
                {
                    pos += tm[j];
                }
            }
            if (pos > an)
            {
                an = pos;
            }
        }
    }
    cout << an << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve2();

    return 0;
}
// ali monoar