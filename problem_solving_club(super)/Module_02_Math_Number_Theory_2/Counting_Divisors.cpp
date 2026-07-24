#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
const int maxN = 1e6 + 9;
vector<int> divisors[maxN];
void all_divisor()
{
    for (int i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            divisors[j].push_back(i);
        }
    }

    for (int i = 1; i <= 30; i++)
    {
        cout << i << " -> ";
        for (auto val : divisors[i])
        {
            cout << val << " ";
        }
        cout << nl;
    }
}
vector<int> divi(maxN);
void solve()
{
    for (int i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            divi[j]++;
        }
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << divi[n] << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}