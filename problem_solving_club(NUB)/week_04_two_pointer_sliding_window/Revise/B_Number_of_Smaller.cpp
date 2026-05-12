#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // array size input nite hobe 
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (auto &&i : b)
    {
        cin >> i;
    }
    // two pointer chalate hobe
    int l = 0, r = 0, ans = 0;
    // right boundery porjonto jete hobe
    while (r<m)
    {
        if(l<n&&a[l]<b[r]){
            ans++;
            l++;
        }else{
            cout << ans << " ";
            r++;
        }
    }
    

    return 0;
}