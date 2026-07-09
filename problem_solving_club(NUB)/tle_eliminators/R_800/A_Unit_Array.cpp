#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int pos = 0, neg = 0, sum = 0, multi = 1;
    for (auto &i : a)
    {

        cin >> i;
        if (i > 0)
            pos++;
        else
            neg++;
        sum += i;
        multi *= i;
    }
    int op = 0;
    while (pos<neg||neg%2!=0)
    {
        op++;
        pos++;
        neg--;
    }
    cout << op << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}