#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    vector<int> A = {a1, a2};
    vector<int> B = {b1, b2};

    int ways = 0;

   
    for (int i = 0; i < 2; i++)
    {
       
        for (int j = 0; j < 2; j++)
        {
            int sWins = 0, slWins = 0;

          
            if (A[i] > B[j])
                sWins++;
            else if (A[i] < B[j])
                slWins++;

            
            int s2 = A[1 - i];
            int sl2 = B[1 - j];
            if (s2 > sl2)
                sWins++;
            else if (s2 < sl2)
                slWins++;

            if (sWins > slWins)
                ways++;
        }
    }

    cout << ways << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
