#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    set<long long> divisors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n % i == 0)
            {
                divisors.insert(i);
                if (i != n / i)
                {
                    divisors.insert(n / i);
                }
            }
        }
    }
    if (divisors.size() < k)
    {
        cout << -1 << "\n";
    }
    else
    {

        auto it = divisors.begin();
        advance(it, k - 1);
        cout << *it << endl;
    }

    return 0;
}