#include<iostream>
using namespace std;
int main(){
    // int a=5, b=10;
    // // int *str=&a,*str2=&b;
    // int *str = &a;
    // int *str2 = &b;
    // cout
    //     << *str + *str2;

    // can i use the dereference operator to take input
    //let's see
    int a,b;
    int *p1 = &a;
    int *p2 = &b;
    cout<<"enter the first number: ";
    cin >> *p1;
    cout << "enter the second number : ";
    cin >> *p2;
    cout << "Sum = " << *p1 + *p2;
    return 0;
}