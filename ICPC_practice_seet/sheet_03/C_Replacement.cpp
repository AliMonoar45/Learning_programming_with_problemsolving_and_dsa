#include <bits/stdc++.h>
using namespace std;
void replace(vector<int> &a, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        if (a[i] > 0)
            a[i] = 1;
        else if (a[i] < 0)
        {
            a[i] = 2;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    replace(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}