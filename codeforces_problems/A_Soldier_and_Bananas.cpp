#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int borrow;

    int priceOfBanana = k *((w*(w+1))/2);

    borrow = max(0, priceOfBanana - n);
    cout << borrow;
    return 0;
}