#include <bits/stdc++.h>
using namespace std;
int main() {
    long double n,k,a;
    cin >> n >> k >> a;
    long double val = (n * k) / a;
    if (val==floor(val))
    {
        if (val>=INT_MIN && val<=INT_MAX)
        {
            cout << "int" << endl;
        }else{
            cout << "long long" << endl;
        }
        
    }else{
        cout << "double" << endl;
    }
    
    return 0;
}