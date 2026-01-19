#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int p, q;
    int rooms=0;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (2<=q-p)
        {
            rooms++;
        }
        
    }
    cout << rooms;

    return 0;
}