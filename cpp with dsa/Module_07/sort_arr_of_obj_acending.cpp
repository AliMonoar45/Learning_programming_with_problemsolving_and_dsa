#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    int marks;
};
bool cmp(Student l, Student r)
{
    //  what we want to be the order is true
    if (l.marks < r.marks)
    {
        return true;
    }
    else
        return false;
}
bool cmp_sort(Student l, Student r)
{
    //  what we want to be the order is true

    return l.marks < r.marks;
}
int main()
{
    int n;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].marks;
    }

    sort(students, students + n, cmp_sort);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].marks << endl;
    }

    return 0;
}