#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr=&x;
    cout<<ptr<<endl;
    ptr += 1;
    cout << ptr << endl;
    return 0;
}