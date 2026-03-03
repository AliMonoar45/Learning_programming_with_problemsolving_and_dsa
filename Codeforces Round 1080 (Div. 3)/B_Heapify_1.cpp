#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int dev = n / 2;

        for (int i = 1; i < dev; i++)
        {
            if(v[i+1]>v[(2*i)+2])
            swap(v[i + 1], v[(2 * i) + 2]);
        }
        bool flag = true;
        for (int i = 2; i <= n; i++)
        {
            if (v[i - 1] != v[i]-1)
            {

                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}