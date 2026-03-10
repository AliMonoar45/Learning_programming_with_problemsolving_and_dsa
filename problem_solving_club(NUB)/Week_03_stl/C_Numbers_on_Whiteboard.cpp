#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    multiset<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i);

    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1; i++)
    {
        auto it = prev(s.end());
        int a = *it;
        s.erase(it);
        it = prev(s.end());
        int b = *it;
        s.erase(it);

        s.insert((a + b + 1) / 2);
        ans.push_back({a, b});
    }

    cout << *s.begin() << "\n";
    for (auto &p : ans)
        cout << p.first << " " << p.second << "\n";
}
void solve_2(){
    int n;
    cin >> n;

    multiset<int> ms;
    for (int i = 1; i <= n; i++)
        ms.insert(i);

    vector<pair<int, int>> ans;

    for (int i = 1; i < n; i++)
    {

        auto it_a = --ms.end();
        int a = *it_a;
        ms.erase(it_a);

        auto it_b = --ms.end();
        int b = *it_b;
        ms.erase(it_b);

        ms.insert((a + b+1) / 2);
        ans.push_back({a, b});
    }

    cout << *ms.begin() << endl;
    for (auto [x, y] : ans)
        cout << x << " " << y << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
       
        solve_2();
    }

    return 0;
}