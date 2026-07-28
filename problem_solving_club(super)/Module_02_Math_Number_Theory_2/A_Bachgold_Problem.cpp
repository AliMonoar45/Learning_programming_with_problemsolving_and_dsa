#include <bits/stdc++.h>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

#define ll long long
#define nl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;

    int k = n / 2;
    cout << k << "\n";
    
    if (n % 2 != 0)
    {
        for (int i = 0; i < k - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << "\n";
    }
   
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     solve();

    return 0;
}