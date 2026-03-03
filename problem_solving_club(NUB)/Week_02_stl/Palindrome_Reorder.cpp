
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int mid = n / 2;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int odd_cnt = 0;
    
    for(auto it: mp){
        if(it.second%2!=0)
            odd_cnt++;

        if (odd_cnt>1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        
    }

    string l = "", m = "";
    for(auto it: mp){
        int cnt = it.second;
        l.append(cnt / 2, it.first);
        if(cnt%2!=0)
            m.push_back(it.first);
    }
    string r=l;
    reverse(r.begin(), r.end());

    cout << l << m << r << nl;

    return 0;
}