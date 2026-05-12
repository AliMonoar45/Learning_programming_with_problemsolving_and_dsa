#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> A, B, C, D;
        for (int x : a)
        {
            if (x % 6 == 0)
                A.push_back(x); 
            else if (x % 2 == 0)
                B.push_back(x); 
            else if (x % 3 == 0)
                D.push_back(x); 
            else
                C.push_back(x); 
        }

    

        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        for (int i = 0; i < B.size(); i++)
        {
            cout << B[i] << " ";
        }
        
        for (int i = 0; i < C.size(); i++)
        {
            cout << C[i] << " ";
        }
        for (int i = 0; i < D.size(); i++)
        {
            cout << D[i] << " ";
        }
        
        cout << '\n';
    }
    return 0;
}
