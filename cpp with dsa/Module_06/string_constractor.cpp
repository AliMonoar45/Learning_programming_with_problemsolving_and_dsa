#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello";
    // 1
    // assign value in constructor
    // string s("Hello");

    // 2
    // using constructor we can resize string like bellow
    string s("hello", 2);

    // 3
    // if we asign or pass a string variable to an string object then we pass int value it will make first values to be remove like in bellow
    // string s = "hello world";
    // string t(s, 4);
    // cout << t<<endl;

    // 4
    // this make aaaaa or value times carectr
    // string s(5, ' ');
    cout << s<<endl;
    return 0;
}