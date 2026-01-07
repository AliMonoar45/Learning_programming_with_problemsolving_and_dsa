#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int y = 0;
    for (int i = 0; a<=b; i++)
    {
        y++;
        a *= 3;
        b *= 2;
    }
    cout << y;

    return 0;
}