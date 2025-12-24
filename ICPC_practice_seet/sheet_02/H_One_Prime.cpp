#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x%i==0)
        {
            flag = true;
            break;
        }
        
    }
    if (flag)
    {
        cout << "NO" << endl;
    }else
        cout << "YES" << endl;

    return 0;
}