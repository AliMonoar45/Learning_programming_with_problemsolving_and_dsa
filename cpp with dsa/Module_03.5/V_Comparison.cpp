#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    bool result = false;
    if (c=='>')
    {
        result = (a > b);
    }else if (c=='<')
    {
        result = (a < b);
    }else if (c=='=')
    {
        result = (a == b);
    }

    cout << (result ? "Right" : "Wrong");

    return 0;
}