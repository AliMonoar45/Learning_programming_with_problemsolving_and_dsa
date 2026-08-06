#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    int neg = 0, zero = 0;
    int pro = 1;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==-1)
            neg++;
        else if (a[i]==0)
        {
            zero++;
        }
        pro *= a[i];
    }
    if(pro==1)
        cout << 0 << nl;
    else{
        int op = 0;
        int zop = zero;
        int neg_op = (neg % 2) * 2;
        op = neg_op + zop;
        cout << op << nl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}