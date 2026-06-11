#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> s;
    int ans = 0, l = 0, r = 0;

    while (r<n)
    {
        while (s.count(a[r]))
        {
            s.erase(a[l]); 
            l++;
        }
        s.insert(a[r]);
        ans = max(ans, r - l + 1);
        r++;
    }

    cout << ans << endl;
    
    return 0;
}
