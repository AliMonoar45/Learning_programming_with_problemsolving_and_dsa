#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        map<char, int> mp;
        for(char c:s){
            mp[c]++;
        }
        if(mp['(']==mp[')'])
            cout << "YES\n";
            else
                cout << "NO\n";
    }
    
    return 0;
}