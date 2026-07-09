#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    bool zero = false;
    int near_zero = INT_MAX;
    for(auto &i:a){
        cin >> i;
        if(i==0){
            cout << 0;
            return 0;
        }
        near_zero = min(near_zero, abs(i));
    }
    cout << near_zero << nl;
    return 0;
}