#include <bits/stdc++.h>
using namespace std;

bool distinctDigits(int year)
{
    vector<int> v(10, 0);
    while (year)
    {
        int d = year % 10;
        if (v[d])
            return false; 
        v[d] = 1;
        year /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = n + 1; i <=10000; i++)
    {
        if (distinctDigits(i))
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
