#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, ans;
    char sign, eqa;
    cin >> a >> sign >> b >> eqa >> ans;
    bool res = false;

    if (sign == '+')
    {
        res = (a + b == ans);
    }
    else if (sign == '-')
    {
        res = (a - b == ans);
    }
    else if (sign == '*')
    {
        res = (a * b == ans);
    }
    if (res)
    {
        cout << "Yes";
    }
    else
    {
        if (sign == '+')
        {
            cout << a + b;
        }
        else if (sign == '-')
        {
            cout << a - b;
        }
        else if (sign == '*')
        {
            cout << a * b;
        }
    }

    return 0;
}