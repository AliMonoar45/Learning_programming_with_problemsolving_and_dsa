#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans="";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            // right most small carector remove with b and if there is nothing then do nothing
            for (int j = ans.size() - 1; j >= 0;j--){
                if(ans[j]>='a'&&ans[j]<='z'&&!ans.empty()){
                    ans.erase(j, 1);
                    break;
                }
            }
        }
        else if (s[i] == 'B')
        {
            // right most big carector remove with b and if there is nothing then do nothing
            for (int j = ans.size() - 1; j >= 0; j--)
            {
                if (ans[j] >= 'A' && ans[j] <= 'Z' && !ans.empty())
                {
                    ans.erase(j, 1);
                    break;
                }
            }
        }else{
            ans.push_back(s[i]);
        }
    }
    cout << ans;
}
void sort_v(vector<pair<char, int>> &v, int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (v[i].second > v[j].second)
                swap(v[i], v[j]);
        }
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
        string s;
        cin >> s;

        vector<pair<int, char>> big;
        vector<pair<int, char>> small;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' && !small.empty())
                small.pop_back();
            else if (s[i] == 'B' && !big.empty())
                big.pop_back();
            else if (s[i] != 'b' && s[i] != 'B')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    big.push_back({i, s[i]});
                else
                {
                    small.push_back({i, s[i]});
                }
            }
        }
        vector<pair<int, char>> v;
        v = big;
        v.insert(v.end(), small.begin(), small.end());

        sort(v.begin(), v.end());

        // for(auto val: v)
        //     cout << val.first << " " << val.second << endl;
        // cout << endl;

        // sort_v(v, v.size());

        for (auto val : v)
            cout << val.second;
        
        cout << endl;
    }

    return 0;
    
}