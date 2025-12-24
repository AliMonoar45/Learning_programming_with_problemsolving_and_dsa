#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            int op1 = arr[i] * x;
            int op2 = y;
            total += min(op1, op2);
        }
        


        //my code
        /* for (int i = 0; i < n; i++)
        {
            if (arr[i] * x >= y)
            {
                arr[i] = y;
            }
            else
            {

                arr[i] *= x;
            }

            total += arr[i];
        } */
        cout << total;

        cout << endl;
    }

    return 0;
}