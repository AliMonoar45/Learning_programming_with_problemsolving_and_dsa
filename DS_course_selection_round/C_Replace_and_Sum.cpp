#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for(auto &i: a)
            cin >> i;
        for(auto &i: b)
            cin >> i;
        // second operation first
        for (int i = 0; i < n; i++)
        {
            if(b[i]>a[i])
                a[i] = b[i];
        }
        // operation one
        for (int i = n-2; i >= 0; i--)
        {
            if(a[i]<a[i+1])
                a[i] = a[i + 1];
        }
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            long long sum = a[r];
            if(l-1>=0)
                sum -= a[l - 1];
            cout << sum << " ";
        }
        cout << endl;
    }
    
    return 0;
}