#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n++;
    vector<int> color(n + 1,1);
    int color_need = 1;
    for (int i = 2; i <= n; i++)
    {
        if (color[i] == 1)
        {

            for (int j = i + i; j <= n; j += i)
            {
                color[j] = 2;
                color_need = max(color_need, color[j]);
            }
        }
    }
    cout << color_need << nl;
    for (int i = 2; i <=n; i++)
    {
        cout << color[i] << " ";
    }
    

    return 0;
}