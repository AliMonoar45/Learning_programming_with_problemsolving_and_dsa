#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n, m;
    cin >> n >> m;
    
    cout << min(n,m-n);
    return 0;
}