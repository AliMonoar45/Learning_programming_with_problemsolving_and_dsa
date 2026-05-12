#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int one = 0;
        while (n>0)
        {
            if(n%2==1)
                one++;
            n=n / 2;
        }
        if(one%2==0)
            cout << "EVEN\n";
            else{
                cout << "ODD\n";
            }
    }
    
    return 0;
}