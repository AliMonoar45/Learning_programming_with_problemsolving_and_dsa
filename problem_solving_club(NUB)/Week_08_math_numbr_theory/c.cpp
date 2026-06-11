#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;
    int brk = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==1){
            brk += 0;
        }else{
            int num = a[i];
            while (num>1)
            {
                num--;
                brk++;
            }
            
        }
    }
    cout << brk << endl;
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