#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int binsum(int n){
    int res = 0;
    while (n>0)
    {
        if(n%2==1)
            res++;

        n /= 2;
    }
    return res;
}
void solve(){
    int n;

    cin >> n;
    int sum = binsum(n);
    if(sum%2==0)
        cout << "EVEN\n";
        else
            cout << "ODD\n";
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