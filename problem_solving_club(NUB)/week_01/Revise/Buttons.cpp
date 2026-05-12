#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout << a + b;
    else{
        int mx = max(a, b);
        cout << mx + (mx - 1);
    }
    return 0;
}