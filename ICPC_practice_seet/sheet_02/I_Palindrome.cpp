#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int sz = num.size();
    int flag = 1;
    for (int i = 0,j = sz-1; i < j; i++,j--)
    {
        if (num[i]!=num[j])
        {
            flag = 0;
            break;
        }
        
    }
    if (flag)
    {
        cout << num << endl<<"YES";
    }else
    {
        reverse(num.begin(), num.end());
        cout << num << endl<< "NO";
    }

    return 0;
}