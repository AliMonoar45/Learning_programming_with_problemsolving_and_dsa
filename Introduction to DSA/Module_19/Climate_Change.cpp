#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for(auto &i:v)
        cin >> i;

    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    long long total = pre[n - 1];
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        long long l_side = pre[i];
        long long r_side = total - pre[i];
        if(l_side== r_side)
            cnt++;
    }
    

    cout << cnt;

    return 0;
}