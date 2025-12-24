#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_mark;
    int eng_mark;
};
bool cmp(Student l, Student r)
{
    int l_total = l.math_mark + l.eng_mark,
        r_total = r.math_mark + r.eng_mark;
    if (l_total==r_total)
    {
        return l.id < r.id;
    }

    return  l_total>r_total ;
}
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math_mark >> s[i].eng_mark;
    }
    sort(s, s + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math_mark << " " << s[i].eng_mark << endl;
    }

    return 0;
}