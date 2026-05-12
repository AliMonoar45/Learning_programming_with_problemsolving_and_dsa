#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(auto &i:a)
        cin >> i;
    int l = 0, r = 0;
    int ans = 0;
   long long sum = 0;
    while (r<n)
    {
        sum += a[r];
        if(sum<=k){
            ans = max(ans, (r-l+1));

        }else{
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}