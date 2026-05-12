#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i:a)
        cin >> i;

    long long l = 0, r = n - 1;
    long long l_sum = 0, r_sum = 0, ans = 0;
    while (l<=r)
    {
        if(l_sum<r_sum){
            l_sum += a[l];
            l++;
        }else if(r_sum<=l_sum){
            r_sum += a[r];
            r--;
        }
        if(l_sum==r_sum)
            ans = max(ans, l_sum);
    }
    cout << ans;
    return 0;
}