#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<string,string>, int> mp;
    while (n--)
    {
        string s,t;
        cin >> s>>t;
        mp[{s,t}]++;
    }
    cout << mp.size()<<endl;
    // for (auto &it : mp)
    // {
    //     cout << it.first.first << " " << it.first.second << " -> " << it.second << "\n";
    // }
    return 0;
}