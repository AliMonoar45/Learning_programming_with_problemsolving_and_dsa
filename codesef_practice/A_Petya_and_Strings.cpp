#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (auto &c : s1)
        c = tolower(c);
    for (auto &c : s2)
        c = tolower(c);
    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;
    return 0;
}