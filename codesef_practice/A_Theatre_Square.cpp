#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a;
    cin >> n >> m >> a;
    
    
    int t1 = ceil((double)n / a);
    int t2 = ceil((double)m / a);
    cout << t1 * t2;
    return 0;
}