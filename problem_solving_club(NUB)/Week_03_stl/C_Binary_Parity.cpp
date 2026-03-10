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
        int n;
        cin >> n;

        int sum = 0;

        while (n > 0)
        {
            int rem = n % 2;
            if (rem == 1)
                sum += rem;
            n /= 2;
        }

        if(sum%2==0)
            cout << "EVEN\n";
        else
        cout << "ODD\n";
    }
    return 0;
}