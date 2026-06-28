#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n + 1);
    int ans = INT_MIN;
    int idx = 0;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        int total = x + y;
        if(total>ans){
            ans = total;
            idx = i;
        }
    }
    cout << idx << nl;

    return 0;
}