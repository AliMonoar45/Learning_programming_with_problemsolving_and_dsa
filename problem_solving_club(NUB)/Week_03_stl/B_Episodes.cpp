#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        long long time = n * k;
        if (time < 60)
        {
            cout <<0<<" "<< time << endl;
        }
        else
        {
            int h = time / 60;
            int m = time % 60;
            cout << h << " " << m << endl;
        }
    }

    return 0;
}