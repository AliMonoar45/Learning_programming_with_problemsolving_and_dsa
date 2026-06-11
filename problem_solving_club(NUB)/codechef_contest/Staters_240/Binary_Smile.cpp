#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    // ali monoar
    int n;
    cin >> n;
    string a, b;
    cin>>a>>b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    vector<int> pos_a, pos_b;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='1')
            pos_a.push_back(i);
        if(b[i]=='1')
            pos_b.push_back(i);
    }
    if(pos_a.size()!=pos_b.size()){
        cout << -1 << endl;
    }else{
        int ans = 0;
        int sz = pos_a.size();
        for (int i = 0; i < sz; i++)
        {
            if (pos_a[i]!=pos_b[i])
            {
                /* code */
                ans++;
            }
            
        }
        cout << ans << endl;
    }
    
}
int main()
{
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