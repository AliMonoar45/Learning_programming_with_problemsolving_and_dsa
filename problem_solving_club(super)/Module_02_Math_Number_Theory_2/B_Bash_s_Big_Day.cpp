#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, mx = 1;
    vector<int> a(100001);
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 2; i <= 100000; i++)
    {
        int s = 0;
        for (int j = i; j <= 100000; j += i)
            s += a[j];
        mx = max(mx, s);
    }
    cout << mx;
}
