#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, m;
    cin >> n >> m;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }
    while (!pq.empty())
    {
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }
}
void solve_2(){
    long long n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (auto &&i : b)
    {
        cin >> i;
    }
    vector<int> ans;

    int l = 0, r = 0;
    while (l<n&&r<m)
    {
        if(a[l]<=b[r]){
            ans.push_back(a[l]);
            l++;
        }else{
            ans.push_back(b[r]);
            r++;
        }
    }
    while (l<n)
    {
        ans.push_back(a[l]);
        l++;
    }
    while (r<m)
    {
        ans.push_back(b[r]);
        r++;
    }
    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n),a(m),ans;
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;

    int ptr1 = 0, ptr2 = 0;

    while (ptr1<n&&ptr2<m)
    {
        code
    }
    

    return 0;
}