#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long total = a + b + c;
        if (total% 3 == 0&& b <=total/3)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}