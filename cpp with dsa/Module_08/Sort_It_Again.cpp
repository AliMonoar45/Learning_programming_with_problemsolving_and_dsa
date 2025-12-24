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
    if (l.eng_mark == r.eng_mark)
    {
        if (l.math_mark==r.math_mark)
        {
            return l.id < r.id;
        }
        
        return l.math_mark > r.math_mark;
    }
    else if (l.eng_mark < r.eng_mark)
    {
        return false;
    }
    return true;
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