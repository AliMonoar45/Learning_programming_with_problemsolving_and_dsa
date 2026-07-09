#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0 || (n % 2 != 0 && k % 2 != 0))
        cout << "YES\n";
    else if(n%2!=0&&k%2==0)
        cout << "NO\n";
    
}
void solve2(){
    ll n, k;
    cin >> n >> k;
    if((n%2==0)||(n-k)%2==0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;while(tc--)
        solve2();
    return 0;
}