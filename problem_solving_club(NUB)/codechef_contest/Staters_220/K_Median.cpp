#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &&i : a)
        {
            cin >> i;
        }
        int rem = n - k;
        int left = rem / 2;
        int right = rem / 2;
        if(rem%2==0)
            left--;
        set<int> ans;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            int cur_l = i;
            int cur_r = n - 1 - i;

            if(cur_l>=left&&cur_r>=right){
                ans.insert(a[i]);
            }
        }
        for (auto &&i : ans)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    
    return 0;
}