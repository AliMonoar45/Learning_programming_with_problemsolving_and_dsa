#include <bits/stdc++.h>
using namespace std;
int* sort_it(int sz){
    int* arr = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + sz, greater<int>());
    return arr;
}
int main() {
    int sz;
    cin >> sz;
    int *arr = sort_it(sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}