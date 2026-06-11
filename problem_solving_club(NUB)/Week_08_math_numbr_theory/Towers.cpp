#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    multiset<long long> t;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        auto it = t.upper_bound(x);
        if (it == t.end())
            t.insert(x);
        else
        {
            t.erase(it);
            t.insert(x);
        }
    }
    cout << t.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}