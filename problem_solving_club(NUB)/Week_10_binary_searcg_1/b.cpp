#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    vector<char> a(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    bool hat = false;
    for (int i = 0; i <=3; i++)
    {
        if(a[i]=='W'&&a[i+1]=='W'&&a[i+2]=='W'){
            hat = true;
            break;
        }
    }
    if(hat)
        cout << "YES";
        else
            cout << "NO";
    cout << endl;
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