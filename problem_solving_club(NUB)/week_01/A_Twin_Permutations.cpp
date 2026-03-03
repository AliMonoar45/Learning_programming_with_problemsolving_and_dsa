#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> v,int n){
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = (n + 1) - v[i];
    }
    return ans;
} int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n+1);
        
        for (int i = 0; i < n; i++)
            cin >> v[i];

        // mentor approach
        
        /* map<int, int> pos;

        for (int i = 0; i < n; i++)
        {
            pos[v[i]] = i;
        }
        vector<int> b(n + 1);
        int idx = 1;
        for (int i = n; i >= 1;i--){
            b[pos[i]] = idx;
            idx++;
        }

            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
         */

        vector<int> ans = solve(v, n);
        for(auto i: ans)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}