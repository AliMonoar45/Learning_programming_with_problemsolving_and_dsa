#include <bits/stdc++.h>
using namespace std;
int smallest_pair(vector<int> &a,int n){
    
    int mn = INT_MAX;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            int res = a[i] + a[j] + j - i;
            mn = min(res, mn);
        }
        
    }
    return mn;
}
void input(vector<int> &a,int n){
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
}
int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n+1);
        input(a, n);
        cout << smallest_pair(a,n) << endl;
    }
    return 0;
}