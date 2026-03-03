#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(auto val : v) cout << val << " ";
    cout << endl;


    // auto it = v.begin()+1;
    // cout << *it << endl;

    // for (auto it = v.begin();it!=v.end();it++){
    //     cout << *it << " ";
    // }
    // for (auto it = v.rbegin();it!=v.rend();it++){
    //     cout << *it << " ";
    // }

    // auto last = v.end();
    // last--;
    // cout << *last << endl;


    // auto last = --v.end(); // end point to the next slot after last val
        
    // cout << *last << endl;

    // reverse(v.begin(), v.end());
    // for(auto val: v)
    //     cout << val << " ";

    auto mx = max_element(v.begin(), v.end());
    cout << *mx << endl;

    int mx_position = mx - v.begin();
    cout << mx_position << nl;
    auto mn = min_element(v.begin(), v.end());
    cout << *mn << endl;

    return 0;
}