#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int closest = a[0];
        for (int i = 0; i < n; i++)
        {   
            if (a[i]>closest)
            {
                closest = a[i];
            }
            
        }
        cout << closest;
        cout << endl;
    }
    
    return 0;
}