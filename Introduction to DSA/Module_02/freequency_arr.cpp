#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr[i];
    }
    int fre[m + 1];
    for (int i = 0; i < m+1; i++)
    {
        fre[i] = 0;
    }
    
    for (int i = 1; i < n + 1; i++)
    {
        fre[arr[i]]++;
        
    }
    for (int i = 1; i < m + 1; i++)
    {
        cout <<i<<" : "<< fre[i] <<endl;
    }
    // O(n)
    return 0;
}