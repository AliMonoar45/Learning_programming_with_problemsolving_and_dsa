#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b;
    cin >> a >> b;
    if((a)>(2*b)/3.0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}