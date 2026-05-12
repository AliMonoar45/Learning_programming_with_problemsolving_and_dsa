#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    std::deque<int> a(n );
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    
    for (int i = n-1; i >= 0; i--)
    {
        auto it = find(a.begin(), a.end(), i+1);
        if (it != a.end())
        {

            int cnt1 = distance(a.begin(), it);
            int cnt2 = distance(it, a.end()) - 1;
            a.erase(it);
            ans += min(cnt1, cnt2);
        }
    }
    cout << ans << endl;
}

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}