#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m, q;
    cin >> n >> m >> q;
    vector<long long> v(m);
    for(auto &i: v)
        cin >> i;
    sort(v.begin(), v.end());
    while (q--)
    {
        long long a;
        cin >> a;
        auto it = upper_bound(v.begin(), v.end(), a);
        if(it==v.end()){
            it--;
            cout << n - *it << '\n';
        }else if (it==v.begin())
        {
            cout << *it - 1 << '\n';
        }else{
            long long next_teacher = *it;
            it--;
            long long prev_teacher = *it;
            long long len = next_teacher - prev_teacher-1;
            cout << (len+1)/2 << '\n';
        }
        
    }
    
}
int main() {
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