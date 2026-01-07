#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int x;
    cin >> x;
    if (x==0)
    {
        cout << -1;
        return 0;
    }
    
    double c = (x * 0.2);
    long long int num = ceil(100.0 / c);
    cout << num;
    return 0;
}