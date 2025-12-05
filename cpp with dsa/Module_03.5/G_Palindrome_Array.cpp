#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin >> sz;
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = sz - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            cout << "NO";
            return 0;
        }
        start++, end--;
    }
    cout << "YES";

    return 0;
}