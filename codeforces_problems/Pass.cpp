#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    vector<int> a(5);
    int si = 0, th = 0;
    for(auto &i:a){
        cin >> i;
        if(i>=60)
            si++;
        if(i>=30)
            th++;
    }
    if(si>=2&&th>=4)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test solve();

    return 0;
}