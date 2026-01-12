/* https://www.codechef.com/problems/BALLOONS */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int cost = 0;
        for (int i = 1; i <= n; i++)
        {
            cost += i * arr[i];
            // cout << arr[i] << " ";
        }
        cout <<cost<< endl;
    }
    
    return 0;
}