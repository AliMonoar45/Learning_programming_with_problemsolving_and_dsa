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
        int sum = 0;
        for(auto &i:a){
            cin >> i;
            sum += i;

        }
        if(sum&1==1)
            cout << "No\n";
            else
                cout << "Yes\n";
    }
    
    return 0;
}