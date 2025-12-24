#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int sz, int start)
{
    if (start == sz)
    {
        return;
    }
    cin >> arr[start];
    input(arr, sz, start + 1);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        input(arr, n, 0);
       
        int changes = 0;
        char gun = 'c';
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > d && gun == 'c')
            {
                gun = 'l';
                changes++;
            }
            else if (arr[i] <= d && gun == 'l')
            {
                gun = 'c';
                changes++;
            }

            // if (arr[i] <= d)
            //     cout << arr[i] << " ";
            // else
            //     cout <<"long:"<< arr[i] << " ";
        }
        cout << changes << endl;
    }

    return 0;
}