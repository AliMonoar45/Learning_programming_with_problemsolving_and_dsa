#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
bool is_prime(int n, int d = 2)
{
    if (n < 2)
    {
        return false;
    }
    if (d > sqrt(n))
    {
        return true;
    }
    if (n % d == 0)
    {
        return false;
    }
    return is_prime(n, d + 1);
}
int main()
{
    int x;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}