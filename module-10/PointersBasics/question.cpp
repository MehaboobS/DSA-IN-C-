#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p = &x;
    // *p =*p+ 1;
    (*p)++;
    cout << *p << endl;
}