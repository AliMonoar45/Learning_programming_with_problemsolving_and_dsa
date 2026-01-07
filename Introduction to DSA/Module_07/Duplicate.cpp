#include <bits/stdc++.h>
using namespace std;
bool has_duplicate(vector<int>  arr, int n)
{
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                res= true;
            }
            
        }
        
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool res = has_duplicate(arr, n);

    if (res)
    {
        cout << "YES";
    }
    else{
        cout << "NO";

    }

    return 0;
}