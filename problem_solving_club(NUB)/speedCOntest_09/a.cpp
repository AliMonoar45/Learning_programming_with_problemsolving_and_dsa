#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, b;
    cin >> r >> b;
    int g = (min(r, b));
     r = r - g;
     b = b - g;
    cout << (g * 5) + (r * 1) + (b * 2);
    return 0;
}