#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ste[1001];
    // cin.ignore();
    while (cin.getline(ste, 1001))
    {
        int len = strlen(ste);
        sort(ste, ste+len);
        for (int i = 0; i < len; i++)
        {
            if (ste[i]!=' ')
            {
                /* code */
                cout << ste[i];
            }
            
        }
        cout << endl;
    }

    return 0;
}