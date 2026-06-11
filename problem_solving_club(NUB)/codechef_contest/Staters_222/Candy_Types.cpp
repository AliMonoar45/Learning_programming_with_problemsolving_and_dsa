#include <bits/stdc++.h>
using namespace std;
void solve2()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    // this is for sort
    vector<pair<int, int>> s;
    for (auto [x, y] : mp)
    {
        s.push_back({y, x});
    }
    sort(s.begin(), s.end());

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].first != s[i + 1].first)
        {
            cout << s[i].second << endl;
            return;
        }
    }

    cout << '\n';
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    vector<pair<int, int>> cmp;

    for(auto [x,y]:mp){
        cmp.push_back({y, x});
    }
    sort(cmp.begin(), cmp.end(), [](auto &p1, auto &p2)
         {
             if (p1.first == p2.first)
                 return p1.second < p2.second; 
             return p1.first > p2.first;       
         });

    cout << cmp[0].second << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}