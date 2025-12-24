#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_sum(const vector<int> &v, int n)
{
    vector<int> p_sum(n);
    p_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        p_sum[i] = p_sum[i - 1] + v[i];
    }
    return p_sum;
}

vector<int> suffix_sum(const vector<int> &v, int n)
{
    vector<int> s_sum(n);
    s_sum[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        s_sum[i] = s_sum[i + 1] + v[i];
    }
    return s_sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pre = prefix_sum(v, n);
    vector<int> suff = suffix_sum(v, n);

    for (int i = 0; i < n; i++)
    {
        if (pre[i]  == suff[i] )
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
