#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >> n >> k;
    if(k==0){
        long long lev = (4 + n - 1) % 4 + 1;
        if (lev==4)
        {
            cout << "Off\n";
        }
        else
            cout << "On\n";
    }
    else{
        bool on = false, off = false;
        for (int i = 1; i <=3; i++)
        {
            long long lev = (i + n - 1) % 4 + 1;
            if(lev==4)
                off = true;
            else
                on = true;
        }
        if(on&&off)
            cout << "Ambiguous\n";
        else if(on)
            cout << "On\n";
            else
                cout << "Off\n";
    }
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