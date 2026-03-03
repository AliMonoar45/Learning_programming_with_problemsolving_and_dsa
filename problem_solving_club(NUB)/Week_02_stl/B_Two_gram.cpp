#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    pair<string, int> ans = {"", -1};
    for (int i = 0; i < n-1; i++)
    {
       
            string st;
            st.push_back(s[i]);
            st.push_back(s[i+1]);
            // sort(st.begin(), st.end());
            mp[st]++;
            if(mp[st]>ans.second) {
                ans.first = st;
                ans.second = mp[st];
            }

        
        
    }
    // for(auto it: mp)
    //     cout << it.first << " -> " << it.second << endl;
    cout << ans.first << endl;

    return 0;
}