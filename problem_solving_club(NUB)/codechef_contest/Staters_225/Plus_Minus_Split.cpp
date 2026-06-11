#include <bits/stdc++.h>
using namespace std;
bool is_equal(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]!=v[i+1])
            return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        vector<int> check;
        for (int j = 0; j < n; j++)
        {
            if(j<i){
                check.push_back(a[i] + a[j]);
            }
            else if(j>=i){
                check.push_back(a[j] - a[i]);
            }
            
        }
        if (is_equal(check))
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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