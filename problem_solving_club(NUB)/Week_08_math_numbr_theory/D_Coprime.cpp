#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> pairs[1001];
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <=1000; j++)
        {
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
        
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(1001,-1);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            a[val] = i;
        }

        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if(a[i]!=-1){
                for(auto j:pairs[i]){
                    if(a[j]!=-1){
                        int x = a[i];
                        int y = a[j];
                        ans = max(ans, x + y);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    

    return 0;
}