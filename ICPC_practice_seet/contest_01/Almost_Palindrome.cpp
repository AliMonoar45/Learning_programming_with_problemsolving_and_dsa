#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int arr[25]={0};
        for (int i = 0,j=sz-1; i < j; i++,j--)
        {
            arr[i] += s[i] - 'a';
        }
        for (int i = 0; arr[i] != 0; i++)
        {
            cout <<"i: "<<i<<" "<< arr[i] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}