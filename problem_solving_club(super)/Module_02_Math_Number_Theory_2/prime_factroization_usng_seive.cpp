#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;      // adjust as needed
vector<int> spf(MAXN + 1); // smallest prime factor

// Precompute smallest prime factor for every number
void sieve()
{
    for (int i = 2; i <= MAXN; i++)
        spf[i] = i;
    for (int i = 2; i * i <= MAXN; i++)
    {
        if (spf[i] == i)
        { // i is prime
            for (int j = i * i; j <= MAXN; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

// Return prime factorization of n
vector<int> getFactorization(int n)
{
    vector<int> factors;
    while (n != 1)
    {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}

int main()
{
    sieve();
    int n;
    cin >> n;
    vector<int> factors = getFactorization(n);
    for (int f : factors)
        cout << f << " ";
    cout << "\n";
    return 0;
}
