#include<iostream>
#define MAX 12;
using namespace std;
int a = 10;
void f(int x=0,float y=0){
    cout << x << " " << y;
}
int main(){
   
    f(34,454.8349);
    // f();
    return 0;
}