#include <bits/stdc++.h>
using namespace std;
void get_arr(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    cin >> arr[idx];
    get_arr(arr, sz, idx + 1);
}
void out_arr(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    cout << arr[idx] << " ";
    out_arr(arr, sz, idx + 1);
}
bool is_found(int arr[], int sz, int target)
{
    bool result = false;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            for (int k = j + 1; k < sz; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    result = true;
                    break;
                }
            }
        }
    }
    return result;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int sz, target;
        cin >> sz >> target;
        int arr[sz];
        get_arr(arr, sz, 0);
        // out_arr(arr, sz, 0);
        bool result = is_found(arr, sz, target);

        if (result)
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