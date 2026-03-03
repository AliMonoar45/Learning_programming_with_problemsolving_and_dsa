// it is sorted
// unique

#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    // for (auto it = s.begin(); it != s.end(); it++)
    //     cout << *it << " ";
    // auto it = s.begin();
    // it++;
    // cout << *it << endl;


    // auto it = s.find(6);
    // if(it!=s.end())
    //     cout << *it << " ";

    if (s.erase(6))
    {
        cout << "6 was erased\n";
    }
    else
    {
        cout << "6 not found\n";
    }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " "<<nl;
    cout<<s.count(6);
    return 0;
}