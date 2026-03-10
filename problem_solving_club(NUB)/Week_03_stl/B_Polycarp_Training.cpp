#include <bits/stdc++.h>
using namespace std;

void solve_1(){
    long long n;
    cin >> n;
    vector<long long> s(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    long long i = 1;
    long long cnt = 0;
    for (auto val : s)
    {
        if (val >= i)
        {

            cnt++;
            i++;
        }
    }
    cout << cnt;
}
void solve_2(){
    long long n;
    cin >> n;
    multiset<int> ms;
    for (long long i = 1; i <= n;i++){
        int val;
        cin >> val;
        ms.insert(val);
    }
    int ans = 0;
    int prob = 1;
    while (!ms.empty())
    {
        auto LB = ms.lower_bound(prob);
        if(LB!=ms.end()){
            ans++;
            ms.erase(LB);
        }else{
            break;
        }
        prob++;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_2();

    return 0;
}