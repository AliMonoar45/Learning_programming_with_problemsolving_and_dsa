#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    ll ans = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        freq[a[r]]++;

        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
                freq.erase(a[l]);
            l++;
        }

        ans += (r - l + 1);
        r++;
    }

    cout << ans << "\n";
    return 0;
}
