#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int small = 0;
        for (int i = l; i <r; i++)
        {   
            // if (i==1)
            // {
            //     continue;
            // }
            
           if (v[i-1]>v[i]&&v[i+1]>v[i])
           {
               small++;
           }
           
        }
        cout << small << endl;
    }
    

    return 0;
}