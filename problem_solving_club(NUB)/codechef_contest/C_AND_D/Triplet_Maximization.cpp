#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
void solve()
{
    int x, y;
    cin >> x >> y;

    vector<int> b(x, 1), c(y, 2);
    vector<int> a;
    a = b;
    a.insert(a.end(), c.begin(), c.end());
    int s = 0;
    int n = a.size();
    for (int i = 0; i < n - 2;i+=3)
    {
        s += max({a[i], a[i + 1], a[i + 2]});
        // cout << i <<" "<<i+1<<" "<<i+2<< endl;
    }
    // print(a);
    cout <<s<< endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}