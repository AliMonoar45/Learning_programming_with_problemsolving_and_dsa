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
        cin >> n;
        vector<int> a(n);
        for(auto &i:a)
            cin >> i;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            
            if(4>=a[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    
    return 0;
}