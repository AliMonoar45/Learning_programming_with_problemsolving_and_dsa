#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> even, odd;
    for (auto &i:a){
        cin >> i;
        if(i%2==0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    if(even.empty()||odd.empty()){
        for (int i = 0; i < n; i++)
        {
            cout << a[i]<<" ";
        }
        cout << nl;
        return;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
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