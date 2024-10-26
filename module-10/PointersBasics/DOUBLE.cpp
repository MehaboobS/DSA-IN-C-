#include<iostream>
using namespace std;
int main(){
    int x = 45;
    int *ptr = &x;
    int **p = &ptr;

    //  cout << p << endl;
    cout << *p<<endl;
    //  cout << &ptr;
    // cout << &x << endl;
    cout << ptr << endl;
    // cout << *ptr << endl;
    // cout<<&ptr<<endl;
}