#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin >> x >> y;
    int w = x / __gcd(x, y);
    int h = y / __gcd(x, y);
    if(w==16&&h==9)
        cout << "Yes";
        else
            cout << "No";
    return 0;
}