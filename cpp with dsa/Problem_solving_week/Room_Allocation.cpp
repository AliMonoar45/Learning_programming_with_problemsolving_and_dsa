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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int check;
            cin >> check;
            if (check % 2 != 0)
            {
                arr[i] = check + 1;
            }
            else
            {
                arr[i] = check;
            }
        }
        int total_student = 0;
        for (int i = 0; i < n; i++)
        {
            total_student += arr[i];
        }
        int total_room = ceil((double)total_student / 2);

        cout << total_room << endl;
    }

    return 0;
}