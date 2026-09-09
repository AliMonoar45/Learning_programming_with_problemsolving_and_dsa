#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

const int maxN = 300300;

vector<int> a(maxN);
int f(int l,int r){
    if(r-l==1)
        return 0;
    int mid = l + (r - l) / 2;
    int max_in_left = *max_element(a.begin() + l, a.begin() + mid);
    int max_in_right = *max_element(a.begin() + mid, a.begin() + r);
    int ans = 0;
    if(max_in_left>max_in_right){
        ans++;
        for (int i = 0; i < (mid-l); i++)
        {
            swap(a[l + i], a[mid + i]);
        }
        
    }
    return f(l, mid) + f(mid, r) + ans;
}
void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = f(0, n);
    if(is_sorted(a.begin(),a.begin()+n)){
        cout << ans << nl;
    }else
        cout << -1 << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}