#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mn = arr[0];
        int mx = arr[n-1];
        if(mn%2==mx%2)
            cout << 0 << endl;
            else
            {
                int i=0, count1 = 0;
                while (arr[i] % 2 != mx % 2)
                {
                    i++;
                    count1++;
                }
                int j = n-1, count2 = 0;
                while (arr[j] % 2 != mn % 2)
                {
                    j--;
                    count2++;
                }
                cout << ((count1 < count2) ? count1 : count2)<<endl;
            }
            
    }
    
    return 0;
}