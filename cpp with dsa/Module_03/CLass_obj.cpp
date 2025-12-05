#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    char name[100];
    double cgpa;
};
int main()
{
    Student a;
    a.roll = 10;
    a.cgpa = 3.58;
    char temp[100] = "Rakib";
    strcpy(a.name, temp);
    cout << a.name << " " << a.roll << " " << a.cgpa;

    return 0;
}