#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
bool is_prime(ll n){
    if(n==1)
        return false;
        for (ll i = 2; i*i <= n; i++)
        {
            if(n%i==0){
                return false;
            }
        }
        return true;
}
bool is_perfect_sqrt(ll n){
    ll x = sqrtl(n);
    if(x*x==n)
        return true;
    else
        return false;
}
void solve(){
  
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (is_perfect_sqrt(x) && is_prime(sqrtl(x)))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    
    

    return 0;
}