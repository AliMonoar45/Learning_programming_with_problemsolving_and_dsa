#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        a = "#" + a;
        b = "#" + b;
        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == '0')
            {
                if (i % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2 == 0)
                {
                    if (odd > 0)
                    {
                        odd--;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if(even>0){
                        even--;
                    }else{
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}