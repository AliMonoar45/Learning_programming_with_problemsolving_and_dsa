#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int i = 1;
    while (i<=n-i+1)
    {
        if (i % 2 == 1)
            swap(a[i], a[n - i + 1]);
        i++;
    }
    for (int i = 1; i <= n;i++)
        cout << a[i] << " ";

        return 0;
}