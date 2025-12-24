#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int tar;
    cin >> tar;
    int l = 0, r = n - 1;
    int flag = 0;
    while (l<=r)
    {
        int middle = (l + r) / 2;
        if (a[middle]==tar)
        {
            flag = 1;
            break;
        }else if (a[middle]>tar)
        {
            r = middle - 1;
        }else
        {
            l = middle + 1;
        }
        
        
        
    }
    if(flag)
        cout << "found\n";
    else
        cout << "not found\n";

    return 0;
}