#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(auto &i:a)
            cin >> i;

        sort(a.begin(), a.end(), greater<int>());

        int sum = 0;
        for (int i = 0; i < k;i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    
    return 0;
}