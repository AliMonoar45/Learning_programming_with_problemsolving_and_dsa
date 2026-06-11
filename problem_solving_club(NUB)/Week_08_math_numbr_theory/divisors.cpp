#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    // O(n)
    /* for (int i = 1; i <= n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    } */

    //O(sqrt(n))
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            if(i==n/i){
                cout << i << " ";
            }else
            cout << i << " " << n / i << " ";
        }
        
    }
    cout << endl;

    return 0;
}