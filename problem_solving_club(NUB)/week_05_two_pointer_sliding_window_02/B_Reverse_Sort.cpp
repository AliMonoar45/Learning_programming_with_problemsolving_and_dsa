#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool sort_check = is_sorted(s.begin(), s.end());
        if(sort_check){
            cout << 0 << endl;
            continue;
        }
        string t = s;
        sort(t.begin(), t.end());
        vector<int> ans;
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
        {
            if(s[i]!=t[i])
                ans.push_back(i + 1);
        }
        cout << ans.size() << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}