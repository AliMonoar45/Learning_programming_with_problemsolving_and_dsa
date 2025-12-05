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
    int mn = INT_MAX;
    for (int i = 0; i < sz; i++)
    {
        mn = min(arr[i], mn);
    }
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        if(arr[i]==mn)
            count++;
    }
    
   if (count%2!=0)
   {
       cout << "Lucky";
   }else{
       cout << "Unlucky";
   }
   

    return 0;
}