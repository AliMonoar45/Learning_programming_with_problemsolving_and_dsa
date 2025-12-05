#include <bits/stdc++.h>

using namespace std;
int *get_array(int sz)
{
    int *arr = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int sz;
    cin >> sz;
    int *tr_arr = get_array(sz);
    for (int i = 0; i < sz; i++)
    {
        cout << *(tr_arr+i)<<" ";
        // cout << tr_arr[i]);
    }
    delete[] tr_arr;

    return 0;
}