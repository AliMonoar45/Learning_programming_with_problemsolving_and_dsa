#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l, Student r)
{
    //  what we want to be the order is true
    if (l.marks < r.marks)
    {
        return true;
    }
    else if (l.marks > r.marks)
    {
        return false;
    }
    else
    {
        if (l.roll < r.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
bool cmp_sort(Student l, Student r)
{
    //  what we want to be the order is true
    if (l.marks == r.marks)
    {
        return l.roll > r.roll;
    }
    else
    {
        return l.marks < r.marks;
    }
}
bool cmp_ternary(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks < r.marks;
}
int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}