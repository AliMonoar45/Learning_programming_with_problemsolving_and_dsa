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

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = b[j];
            j++;
        }
    }
    if (is_sorted(a.begin(), a.end()))
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}