#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[1001];
    char section;
    int number;
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int max_number = -1;
        Student topper;
        for (int i = 0; i < 3; i++)
        {
            Student temp_student;
            cin >> temp_student.id >> temp_student.name >> temp_student.section >> temp_student.number;

            if (max_number < temp_student.number)
            {
                topper = temp_student;
                max_number = temp_student.number;
            }
            else if (max_number == temp_student.number)
            {
                if (topper.id > temp_student.id)
                {
                    topper = temp_student;
                }
            }
        }
        cout << topper.id <<" "<< topper.name <<" "<< topper.section <<" "<< topper.number << endl;
    }

    return 0;
}