#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    return __gcd(a, b);
}
int LCM(int a, int b)
{
    return ((a / (GCD(a, b)) * b));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}