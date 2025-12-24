#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; // O(1)
    cin >> n; // O(1)
    for (int i = 0; i < n; i++) // O(n)
    {
        cout << i << " ";
    }
    cout << endl; // O(1)
    for (int i = 0; i < n; i++) // O(n)
    {
        cout << i << " ";
    }
    return 0; // O(1)
}

/*
   o(1)+o(1)+o(n)+o(1)+o(n)+o(1)
   o(n+n+4) here +4 is constant so ignore
   o(2n)  here 2 is also constant so ignore
   o(n) (ans) 
 */