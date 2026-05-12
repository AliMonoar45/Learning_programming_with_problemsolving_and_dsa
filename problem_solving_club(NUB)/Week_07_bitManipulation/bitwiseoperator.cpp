#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);
    int a = 5, b = 14;
    int ans = a & b;
    int ans2 = a | b;
    int ans3 = a ^ b;
    cout << ans3 << endl;
    return 0;
}