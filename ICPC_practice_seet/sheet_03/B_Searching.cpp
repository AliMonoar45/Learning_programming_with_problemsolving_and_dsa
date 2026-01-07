#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (x==a[i])
        {
            pos = i;
            break;
        }
        
    }
    cout << pos << endl;

    return 0;
}