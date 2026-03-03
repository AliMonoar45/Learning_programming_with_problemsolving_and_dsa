#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    map<string, int> mp;
    while (tc--)
    {
        string s;
        cin >> s;
        if(mp[s]>0){
            cout << "YES";
            mp[s]++;
        }else{
            cout << "NO";
            mp[s]++;
        }
        cout << endl;
    }
    
    return 0;
}