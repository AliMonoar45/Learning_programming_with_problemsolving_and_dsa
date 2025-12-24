#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i < n; i++)
    {                     
        cout << i << " ";
        // i *= k;  //O(log k N)
    }

    cout << endl; // O(1)
    return 0;     // O(1)
}

/*
   Total = O(1) + O(1) + O(log n) + O(1) + O(1)
         = O(log n)
*/