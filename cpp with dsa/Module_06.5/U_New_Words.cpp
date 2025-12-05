#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len = str.size();
    int fre[5] = {0};
    for (int i = 0; i < len; i++)
    {
        if (str[i]=='E'||str[i]=='e')
        {
            fre[0]++;
        }
        else if (str[i] == 'G' || str[i] == 'g')
        {
            fre[1]++;
        }
        else if (str[i] == 'Y' || str[i] == 'y')
        {
            fre[2]++;
        }
        else if (str[i] == 'P' || str[i] == 'p')
        {
            fre[3]++;
        }
        else if (str[i] == 'T' || str[i] == 't')
        {
            fre[4]++;
        }

    }
    int low = min({fre[0], fre[1], fre[2], fre[3], fre[4]});
    cout<<low;
    
    return 0;
}