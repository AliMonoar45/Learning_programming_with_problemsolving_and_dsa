#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        /* code */
        int r, b, g;
        cin >> r >> b >> g;
        int aksathe = min(r, min(g, b));
        int pri = aksathe * 10;
        int baki = (r - aksathe) + (b - aksathe) + (g - aksathe);

        pri += baki * 3;
        cout << pri << endl;
    }
    
    
    return 0;
}