#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0;i<n;i++){
            int x;
            cin >> x;
            v.push_back({abs(x), i});
        }
        sort(v.begin(), v.end());
        vector<int> mark(n, 0);
        for (int i = 0; i <= n / 2;i++){
            mark[v[i].second] = 1;
        }
        if(mark[0])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}