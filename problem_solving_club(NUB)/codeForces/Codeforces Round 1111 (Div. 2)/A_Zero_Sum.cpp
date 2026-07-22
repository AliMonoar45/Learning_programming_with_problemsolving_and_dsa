#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve2(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
        
    }
    if(sum%4)
        cout << "NO\n";
        else
            cout << "YES\n";
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int p_o = 0, n_o = 0;
    for(auto &i:a){
        cin >> i;
        sum += i;
        if(i==1)
            p_o++;
        else
            n_o++;
    }
    if(sum==0){
        cout << "YES\n";
    }else{
        if (n == 1 || (n == 2 && sum != 0)||(n%2!=0))
        {
            cout << "NO\n";
            return;
        }
        int dorkar = n / 2;
        if(n_o%2==dorkar%2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
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
        solve2();
    }
    
    return 0;
}