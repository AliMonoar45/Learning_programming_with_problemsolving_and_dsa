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
        bool flag = true;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]<=4){
                flag = false;
                cout << "NO\n";
                break;
            }
        }
        
        if(flag)
            cout << "YES\n";

        // cout << endl;
    }
    
    return 0;
}