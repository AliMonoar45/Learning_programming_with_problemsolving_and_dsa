#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    map<int, set<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        mp[val].insert(i);
    }

    /* for(auto [x,y]: mp){
        cout << x << " -> ";
        for(auto val:y){
            cout << val << " ";
        }
        cout << nl;
    } */
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
        {
            cout << "NO";
        }else{
            // because they here we need the big idx
            int start_first = *mp[l].begin();
            int end_last = *mp[r].rbegin();
            if(start_first<end_last){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
        cout << endl;
    }
}

int main()
{
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