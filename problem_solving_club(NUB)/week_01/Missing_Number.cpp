#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    long long int sum_all = 0;

    for (long long int i = 0; i < n - 1; i++)
    {
        long long int val;
        cin >> val;

        sum_all += val;
    }
    long long int sum = (n * (n + 1)) / 2;
    long long int miss = sum - sum_all;
    cout << miss;

    return 0;
}