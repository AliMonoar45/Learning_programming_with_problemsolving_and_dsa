#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        Student(string name,int roll){
            this->name = name;
            this->roll = roll;
        }
        void display_details(){
            cout << "Name : " << name << "\nRoll: " << roll;
        }
};
int main() {
    Student sakib("sakib ahmed", 23);
    sakib.display_details();
    return 0;
}