#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int total = n * k;
        if(total<60)
        cout <<0<<" "<< total << endl;
        else{
            int h = 0;
            while (1)
            {
                if(total<60) break;
                total -= 60;
                h++;

            }
            cout << h << " " << total << endl;
        }
    }
    
    return 0;
}