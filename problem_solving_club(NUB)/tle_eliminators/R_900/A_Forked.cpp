#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve(){
    int a, b;
    cin >> a>> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    // get all positions of king and queen can be attacked
    set<pair<int, int>> king_attack, queen_attack;
    for (int i = 0; i < 4; i++)
    {
        king_attack.insert({xk + dx[i] * a, yk + dy[i] * b});
        king_attack.insert({xk + dx[i] * b, yk + dy[i] * a});

        queen_attack.insert({xq + dx[i] * a, yq + dy[i] * b});
        queen_attack.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    int ans = 0;
    for(auto i:king_attack){
        if(queen_attack.find(i)!=queen_attack.end())
            ans++;
    }
    cout << ans << nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}