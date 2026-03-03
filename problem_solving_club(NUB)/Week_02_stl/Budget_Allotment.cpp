#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        // long long sum = 0;
        // for (auto &i : v)
        //     sum += i;
        long long extra = 0;
        long long com = 0;
        for (auto &i : v)
        {
            if (i > x)
            {

                extra += i - x;
                com++;
            }
            else if (i == x)
                com++;
        }
        vector<long long> left;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < x)
                left.push_back(v[i]);
        }
        sort(left.begin(), left.end(), greater<int>());
        for (auto &i : left)
        {
            if (extra >= (x - i))
            {
                extra -= (x - i);
                com++;
            }
            else
                break;
        }
        cout << com << endl;
    }
}