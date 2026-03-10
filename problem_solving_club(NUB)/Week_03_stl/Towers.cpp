#include <bits/stdc++.h>
using namespace std;

void solve_3()
{
    long long n;
    cin >> n;
    multiset<long long> t;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        auto it = t.upper_bound(x);
        if (it == t.end())
            t.insert(x);
        else
        {
            t.erase(it);
            t.insert(x);
        }
    }
    cout << t.size() << "\n";
}
void solve_1()
{
    long long int n;

    cin >> n;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    multiset<int> tops;
    for (int x : v)
    {
        auto it = tops.lower_bound(x + 1);
        if (it != tops.end())
            tops.erase(it);
        tops.insert(x);
    }

    cout << tops.size() << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_3();
    return 0;
}