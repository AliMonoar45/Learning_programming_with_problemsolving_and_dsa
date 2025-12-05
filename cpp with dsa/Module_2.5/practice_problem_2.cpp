#include <bits/stdc++.h>


using namespace std;

int main() {
    int sz_1;
    cin >> sz_1;
    int *arr_1 = new int[sz_1];
    for (int i = 0; i < sz_1; i++)
    {
        cin >> arr_1[i];
    }
    int sz_2;
    cin >> sz_2;
    int *arr_2 = new int[sz_2];
    for (int i = 0; i < sz_1; i++)
    {
        arr_2[i] = arr_1[i];
        // cout << arr_2[i] << " ";
    }
    delete[] arr_1;
    for (int i = sz_1; i < sz_2; i++)
    {
        cin >> arr_2[i];
    }
    for (int i = 0; i < sz_2; i++)
    {
        cout << arr_2[i]<<" ";
    }
    cout << endl;
    // for (int i = 0; i < sz_1; i++)
    // {
    //     cout << arr_1[i] << " ";
    // }

    return 0;
}