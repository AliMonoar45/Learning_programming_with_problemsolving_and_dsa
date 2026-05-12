#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, bool>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = false;
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[i].second == false && a[j].second == false && a[i].first + a[j].first == 4)
            {
                cnt++;
                a[j].second = true;
                a[i].second = true;
                break;
            }
        }
    }
    cout << cnt << endl;
}
void solve2()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int o = 0, tw = 0, th = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
            o++;
        else if (i == 2)
            tw++;
        else
            th++;
    }
    int d = 0;
    if(tw>0)
        d += tw - 1;
    if(o<=th)
        d += o;
    else
        d += th;

    cout << d << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve2();
    }

    return 0;
}