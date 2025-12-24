#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    cout << "in func "  << p << endl;
    p = NULL;
}
int main() {
    int x = 10;
    int *p = &x;
    cout << "in main " << p << endl;

    fun(p);
    cout << p << endl;
    return 0;
}