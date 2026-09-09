#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int k, n;
    cin >> n >> k;
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < n; i+=k)
    {
        bool f = true;
        for (int j = 0; j < k; j++)
        {
            if(s[i+j]=='0'){
                f = false;
                break;
            }
        }
        if(f)
            a++;
    }
    cout << a << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}