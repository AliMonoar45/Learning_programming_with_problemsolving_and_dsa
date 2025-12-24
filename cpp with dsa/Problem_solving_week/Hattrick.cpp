#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        char arr[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
        bool found = true;
        for (int i = 0; i < 6; i++)
        {
            char w = 'W';
            if (arr[i] ==w&& arr[i + 1]==w &&  arr[i + 2]==w)
            {
                found = false;
            }

            // cout << arr[i] << " ";
        }
        if (found)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" << endl;
        }
        }
    return 0;
}