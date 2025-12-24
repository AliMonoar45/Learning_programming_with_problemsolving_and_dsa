#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int free[n] = {0};
    for (int i = 0; i < n; i++)
    {
        free[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << free[i] << " ";
    }

    return 0;
}