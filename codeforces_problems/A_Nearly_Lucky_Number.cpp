#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (char c : s)
        if (c == '4' || c == '7')
            count++;

    if (count == 0)
    {
        cout << "NO";
        return 0;
    }
    while (count>0)
    {
        int d = count % 10;
        if (d!=4&&d!=7)
        {
            cout << "NO";
            return 0;
        }
        count /= 10;
    }
    
    cout << "YES";

    return 0;
}