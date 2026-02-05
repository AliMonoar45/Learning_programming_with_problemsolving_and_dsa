#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre_sum(n);
    vector<int> suf_sum(n);
    pre_sum[0] = v[0];
    suf_sum[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suf_sum[i] = suf_sum[i + 1] + v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(suf_sum[i]==pre_sum[i]){
            cout << i;
            return 0;
        }
    }
    cout << "no";

    return 0;
}