#include <bits/stdc++.h>
using namespace std;
void solve_1()
{
    long long n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        while (cnt < n && a[cnt] < b[i])
        {
            cnt++;
        }
        cout << cnt << " ";
    }
}
void solve_2()
{
    long long n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, cnt = 0;
    int r = 0;
    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }
}
void solve_3()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int l = 0, r = 0, cnt = 0;
    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    int l = 0, r = 0, ans = 0;
    while (r<m)
    {
        if(l<n&&a[l]<b[r]){
            ans++;
            l++;
        }else{
            cout << ans << " ";
            r++;
        }
    }
    

    return 0;
}