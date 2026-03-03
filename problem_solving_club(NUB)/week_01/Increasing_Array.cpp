#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (auto &i : v)
        cin >> i;
    long long int cnt = 0;
    for (long long int i = 0; i < n - 1; i++)
    {
        while (v[i] > v[i + 1])
        {
            // if(v[i]>v[i+1]){

            v[i + 1] += 1;
            cnt++;
            // }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    cout << cnt;

    return 0;
}