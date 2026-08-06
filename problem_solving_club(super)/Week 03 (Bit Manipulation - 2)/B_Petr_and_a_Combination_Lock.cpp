#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin >> i;

    
        for (int mask = 0; mask < (1<<n); mask++)
        {
            // cout << mask << nl;
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                if((mask>>k)&1){
                    // cout << 1 << " ";
                    sum += a[k];
                }else{
                    // cout << 0 << " ";
                    sum -= a[k];
                }
            }
            if(sum==0||sum%360==0){
                cout << "YES\n";
                return 0;
            }
            
        }
        cout << "NO\n";

        return 0;
}