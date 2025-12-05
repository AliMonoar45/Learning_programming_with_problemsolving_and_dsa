#include <bits/stdc++.h>
using namespace std;
int main()
{
    int games;
    cin >> games;
    string wins;
    cin >> wins;
    int a_count = 0,
        d_count = 0;
    int sz = wins.size();
    for (int i = 0; i < sz; i++)
    {
        if (wins[i] == 'A')
            a_count++;
        else if (wins[i] == 'D')
        {
            d_count++;
        }
    }
    if (a_count == d_count)
    {
        cout << "Friendship";
    }
    else if (a_count > d_count)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}