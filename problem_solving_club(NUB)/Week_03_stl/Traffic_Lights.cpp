#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin>>x>>n;
    set<int> s = {0, x};
    multiset<int> ans={x};

    while (n--)
    {
        int q;
        cin >> q;
        auto it = s.lower_bound(q);
        int right = *it;
        int left = *(--it);
        ans.erase(ans.find(right - left));
        ans.insert(q - left);
        ans.insert(right - q);
        
        s.insert(q);
        cout << *ans.rbegin()<< " ";
    }
    
    
    
    return 0;
}