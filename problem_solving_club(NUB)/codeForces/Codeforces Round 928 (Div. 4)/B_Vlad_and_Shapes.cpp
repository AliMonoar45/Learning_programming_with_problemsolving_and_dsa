#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    
    vector<string> v(n);
    for(auto &i:v)
        cin >> i;
    vector<int> rowCount;
    for (int i = 0; i < n; i++)
    {
        int cnt = count(v[i].begin(), v[i].end(), '1');
        if (cnt > 0)
            rowCount.push_back(cnt);
    }
    bool flag = true;
    for (int i = 1; i < rowCount.size() ;i++){
        if(rowCount[i-1]!=rowCount[i]){
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "SQUARE\n";
    else
        cout << "TRIANGLE\n";
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