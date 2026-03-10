#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
   vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;
        map<char, int> mp_c;
        map<int, char> mp_n;

        if (n != s.size())
        {
            cout << "NO\n";
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                int x = v[i];
                char c= s[i];

                if(mp_c.find(c)==mp_c.end())
                mp_c[c] = x;
                if(mp_n.find(x)==mp_n.end())
                mp_n[x] = c;
                if(mp_c[c]!=x||mp_n[x]!=c){
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
            
            
        }
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
        solve();
    }

    return 0;
}