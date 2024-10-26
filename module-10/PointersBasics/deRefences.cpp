#include<iostream>
using namespace std;
int main(){
    int x = 2323;
    int *p = &x;
    // x = 90;  //updation
    // cout << p << endl;  
    // cout << *p << endl;
    // x = 89;
    // cout << *p << endl;
    cout << x << endl;
    *p = 23;
    cout << x << endl;
    return 0;
}