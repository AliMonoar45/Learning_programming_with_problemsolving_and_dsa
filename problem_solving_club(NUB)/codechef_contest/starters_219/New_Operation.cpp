#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x_mini = a[0];
    for (int i = 1; i < n; i++)
    {
        x_mini += 2 * a[i];
    }

    int x_maxi = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        x_maxi = a[i] + 2 * x_maxi;
    }

    cout << x_mini << " " << x_maxi << endl;
}
void pca(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    int mn = 0;
    vector<int> b;
    b = a;
    for (int i = 0; i < n - 1; i++)
    {
        int x = (a[i] + (2 * a[i + 1]));
        a[i + 1] = x;
        mn = x;
    }
    // for(auto i: b)
    //     cout << i << " ";
    if (n == 2)
    {

        cout << mn << " " << mn << endl;
    }
    else
    {
        int mx = mn + (b[n - 1] * 2);
        cout << mn << " " << mx << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        
    }

    return 0;
}