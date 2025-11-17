#include <bits/stdc++.h>


using namespace std;

int *p;
void fun(){
    int x = 10;
    p = &x;
    cout << "fun->"<<* p << endl;
}

int main() {
    fun();
    cout << "main->" << *p << endl;

    return 0;
}
// check this on online compiler