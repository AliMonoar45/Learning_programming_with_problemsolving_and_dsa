#include <bits/stdc++.h>
using namespace std;
int main() {
    int sz;
    cin >> sz;
    vector<int> a(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < sz; i++)   //O(n)
    {   
        for (int j = 0; j < sz; j++)  //O(n)
        {
            if (a[i]+1 == a[j])
            {
                count++;
                break;
            }
        }
        
        
        
    }
    //total O(n^2)
    cout << count;

    return 0;
}