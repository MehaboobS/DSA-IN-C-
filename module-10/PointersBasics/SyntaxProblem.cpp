#include<iostream>
using namespace std;
int main(){
    int x = 12, y = 234;
//    problem
    // int *p1 = &x, p2 =&y;
    // solution
    int *p1 = &x, *p2 = &y;
    cout << p1 << " " << p2;
    return 0;
}