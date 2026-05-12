#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        k++;
        long long one_pay = n / k;
        k--;
        long long k_pay = one_pay * k;
        cout << n - k_pay << endl;
    }

    return 0;
}