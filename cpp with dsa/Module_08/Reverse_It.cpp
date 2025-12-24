#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id;
    }
    int st = 0, en = n-1;
    for (int i = st,j=en; i < j; i++,j--)
    {
        swap(s[i].sec, s[j].sec);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << endl;
    }

    return 0;
}