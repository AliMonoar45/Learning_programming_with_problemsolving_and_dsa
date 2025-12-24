#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // type 1
    // cout << v.size();

    // vector<int> v(10); //type 2
    // cout << v.size();

    // vector<int> v(10,-1); // type 3
    // vector<int> v2(v); // type 4

    // int arr[5] = {1, 2, 3, 4, 5};
    // vector<int> v(arr, arr + 5); //type 5

    vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    cout <<endl<< v.size();
    return 0;
}