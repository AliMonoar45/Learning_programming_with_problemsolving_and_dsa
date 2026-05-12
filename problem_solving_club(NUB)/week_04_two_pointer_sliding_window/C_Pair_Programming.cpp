#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> ans;
    int it_1 = 0, it_2 = 0;
    while (it_1<n&&it_2<m)
    {
        if(a[it_1]<b[it_2]){
            ans.push_back(a[it_1]);
            it_1++;
        }else{
            ans.push_back(b[it_2]);
            it_2++;
        }
    }
    while (it_1<n)
    {
        ans.push_back(a[it_1]);
        it_1++;
    }
    while (it_2<m)
    {
        ans.push_back(b[it_2]);
        it_2++;
    }
    bool possible = true;
    for (int i = 0; i < ans.size();i++){
        if(ans[i]!=0){
            if(k<ans[i]){
                possible = false;
                break;
            }
        }
        else
            k++;
    }
    if(possible){
        for(auto i:ans)
            cout << i << " ";
    }else
        cout << -1;

    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}