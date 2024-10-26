#include<iostream>
using namespace std;
int main(){
    // cout << sizeof(int) << endl;
    // cout << sizeof(float) << endl;
    // cout << sizeof(bool) << endl;
    // cout << sizeof(char) << endl;
    // cout << sizeof(long long) << endl;
    // float val = 23.5656;
    // cout << &val;
    // int x=10,y=20;
    // cout << &x << " " << &y;
    int x=4;
    int *ptr=&x;
    cout << ptr<<endl;
    cout << &x;
    return 0;
}

// 0x61ff0c