#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int team,
            matchs;
        cin >> team >> matchs;
        if (matchs<team)
        {
            cout << "YES\n";
        }else
            cout << "NO\n";
    }
    
    return 0;
}