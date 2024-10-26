#include<iostream>
using namespace std;
void swapTwoNum(int a,int b){
    cout <<"before swapping : "<< a << " " << b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout <<"after swapping : "<< a << " " << b;
}
int main(){
    int a, b;
    cout<<"Enter two number : ";
    cin >> a >> b;
    swapTwoNum(a, b);
    return 0;
}