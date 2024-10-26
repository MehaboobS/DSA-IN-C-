#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10;
    cout << "before swapping : " << a << " " << b << endl;
    a=a+b;
    b = a - b;
    a = a - b;
    cout <<"after swapping : "<< a << " " << b;
    return 0;
}