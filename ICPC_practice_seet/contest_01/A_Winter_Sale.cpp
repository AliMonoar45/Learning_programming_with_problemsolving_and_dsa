#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, p;
    cin >> x >> p;
    double curr = (100 * p) / (100 - x);
    cout << fixed<<setprecision(2)<<curr;
    return 0;
}