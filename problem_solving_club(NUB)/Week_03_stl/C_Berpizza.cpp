#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    set<pair<long long int, long long int>> s;
    multiset<pair<long long int, long long int>> ms;
    vector<long long int> ans;
    int customer_no = 1;
    for (long long int i = 1; i <= n; i++)
    {
        long long int type;
        cin >> type;
        if (type == 1)
        {
            long long int money;
            cin >> money;
            s.insert({customer_no, money});
            ms.insert({money, -customer_no});
            customer_no++;
        }
        else if (type == 2)
        {
            long long int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            long long int pos = -ms.rbegin()->second,
                money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
           
        }
    }
    // for (auto [x, y] : s)
    // {
    //     cout << "{ " << x << " , " << y << " }" << endl;
    // }
    // cout << "ms\n";
    // for (auto [x, y] : ms)
    // {
    //     cout << "{ " << x << " , " << y << " }" << endl;
    // }
    for(auto val:ans){
        cout << val << " ";
    }

    return 0;
}