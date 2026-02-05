#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    if(n==0){
        cout << k << " " << 0;
        return 0;
    }
    cout << k / n <<" "<< k % n<<" ";
    return 0;
}