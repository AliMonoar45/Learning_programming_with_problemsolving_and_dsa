#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);

    for(auto &&i: a)
        cin >> i;

    set<int> seen;
    vector<int> ans;
    for (int i = n-1; i >=0; i--)
    {
        if(seen.find(a[i])==seen.end()){
            seen.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto i: ans)
        cout << i << " ";
    cout << '\n';
    return 0;
}