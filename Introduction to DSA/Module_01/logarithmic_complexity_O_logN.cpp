#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i < n; i *= 2)
    {                     // O(log n)
        cout << i << " "; // O(1) per iteration → O(log n) total
    }

    cout << endl; // O(1)
    return 0;     // O(1)
}

/*
   Total = O(1) + O(1) + O(log n) + O(1) + O(1)
         = O(log n)
*/