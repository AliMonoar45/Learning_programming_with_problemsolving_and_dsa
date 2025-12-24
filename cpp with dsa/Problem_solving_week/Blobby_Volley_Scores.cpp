#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int A = 0, B = 0;
        char serve = 'A';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == serve)
            {
                if(serve=='A')
                    A++;
                else
                    B++;
            }
            else 
            {
                serve = s[i];
            }
        }
        cout << A << " " << B << " ";
        cout << endl;
    }
}
