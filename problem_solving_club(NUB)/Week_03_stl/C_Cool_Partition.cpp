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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int>  curr,seen;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            curr.insert(a[i]);
            seen.insert(a[i]);
            if (curr.size() == seen.size())
            {
                cnt++;
                seen.clear();
            }
        }
        cout << cnt << endl;
    }

    return 0;
}