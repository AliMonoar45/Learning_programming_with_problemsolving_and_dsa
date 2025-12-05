#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int sz;
        cin >> sz;
        long long int arr[sz + 1];
        for (int i = 1; i < sz + 1; i++)
        {
            cin >> arr[i];
        }
        long long int sm = INT_MAX;

        for (int i = 1; i <= sz; i++)
        {
            for (int j = i + 1; j <= sz; j++)
            {
                sm = min((arr[i] + arr[j] + j - i), sm);
            }
        }
        cout << sm << endl;
    }

    return 0;
}