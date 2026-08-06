#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n),freq(n+1,0);
    for(auto &i:a){

        cin >> i;
        freq[i]++;
    }
    int c1 = 0, c2 = freq[k];

    for (int i = 0; i < k; i++)
    {
        if(freq[i]==0)
            c1++;
    }
    cout << max(c1, c2)<<nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}