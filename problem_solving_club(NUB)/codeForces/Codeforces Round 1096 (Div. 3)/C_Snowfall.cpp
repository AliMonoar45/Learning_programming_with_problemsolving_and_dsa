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
    vector<int> a(n), div2, div3, divn,div6;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0&&a[i]%3!=0)
            div2.push_back(a[i]);
        if(a[i]%2!=0&&a[i]%3==0)
            div3.push_back(a[i]);
        if(a[i]%2!=0&&a[i]%3!=0)
            divn.push_back(a[i]);
        if(a[i]%2==0&&a[i]%3==0)
            div6.push_back(a[i]);
    }
    for(auto i:div2)
        cout << i << " ";
    for(auto i:divn)
        cout << i << " ";
    for(auto i:div3)
        cout << i << " ";
    for(auto i:div6)
        cout << i << " ";
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}