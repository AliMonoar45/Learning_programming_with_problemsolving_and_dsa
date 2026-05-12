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

        for (int i = 2; i <= n;i++){
            cout << i << " ";
        }
        cout << 1 << endl;
    }
    
    return 0;
}