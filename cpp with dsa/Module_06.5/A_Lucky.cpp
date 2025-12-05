#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string num;
        cin >> num;
        int sum_f = 0,
            sum_l = 0;
        for (int i = 0; i < 3; i++)
        {
            sum_f +=(num[i] - '0');
        }
        for (int i = 3; i < 6; i++)
        {
            sum_l +=(num[i] - '0');
        }

        if (sum_f == sum_l)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}