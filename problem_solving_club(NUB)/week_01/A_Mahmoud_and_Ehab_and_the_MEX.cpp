#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin >> n>>x;
    vector<int> v(n);
    for(int &i: v)
        cin >> i;
    
    int fre[101] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[v[i]]++;
    }
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
            cnt++;
    }
    for (int i = 0; i < 101;i++){
        if(i<x&&fre[i]==0)
            cnt++;
    }
    cout << cnt;
    return 0;
}