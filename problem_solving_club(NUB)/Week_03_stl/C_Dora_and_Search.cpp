#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<pair<int, int>> dq;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        dq.push_back({x, i});
    }
    bool flag = false;
    // int l, r;
    int mx = n;
    int mn = 1;
    while (dq.size() > 3)
    {
        int l_bound = dq.front().first, r_bound = dq.back().first;
        // auto mx_ptr = max_element(dq.begin(), dq.end());
        // auto mn_ptr = min_element(dq.begin(), dq.end());
        if (l_bound != mx && l_bound != mn && r_bound != mx && r_bound != mn)
        {
            flag = true;
            // l = dq.front().second, r = dq.back().second;
            break;
        }
        if (l_bound == mx || l_bound == mn)
        {       
            if(l_bound==mn)
                mn++;
            else if(l_bound==mx)
                mx--;

            dq.pop_front();
        }
        if (r_bound == mn || r_bound == mx)
        {
            if (r_bound == mn)
                mn++;
            else if (r_bound == mx)
                mx--;
            dq.pop_back();
        }
        
    }
    // for(auto val: dq){
    //     cout << val << " ";
    // }
    if (flag)
        cout << dq.front().second << " " << dq.back().second;
    else
        cout << -1;
    cout << endl;
}
void solve_2()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int l = 1, r = n;
    int mn = 1, mx = n;
    bool flag = false;
    while (l <= r)
    {
        if (v[l] == mn)
        {
            l++;
            mn++;
        }
        else if (v[l] == mx)
        {
            l++;
            mx--;
        }
        else if (v[r] == mn)
        {
            r--;
            mn++;
        }
        else if (v[r] == mx)
        {
            r--;
            mx--;
        }
        else
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << l << " " << r << endl;
    else
        cout << -1 << endl;
}
int main()
{
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