#include<iostream>
using namespace std;
void swap(int &X,int &Y) {
    int temp=X;
    X=Y;
   Y = temp;
}
int main(){
    // int x=23;
    // int *p=&x;
    // cout << x << " " << *p << " " << p;
    // pass by alies
    // int a,b;
    // cout << "Enter two numbers\n";
    // cin>>a>>b;
    // cout<<"BEFORE SWAPPING : " << a << " " << b << endl;
    // swap(a,b);
    // cout<<"AFTER SWAPPING : "<<a<<" "<<b<<endl;
//    pOINTER ARTHEMATICS
//    int x=5;
//    x++;
//    cout<<x<<endl;
//    int *p=&x;
//    cout<<*p<<" " <<p<<endl;
//    p += 1;
//    cout << *p << " " << p << endl;
// null pointer => pointing to nothing

   return 0;
}