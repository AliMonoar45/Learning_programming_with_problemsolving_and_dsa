#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x, y;
        cin >> x >> y;
        long long gap = x - 1;
        long long k = y / gap;
        cout << k << endl;
    }
    
    return 0;
}