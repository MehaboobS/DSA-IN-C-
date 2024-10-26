#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the sides of triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<a<<" , "<<b<<" and "<<c<<" are sides of triangle";

    }
    else{
        cout << a << " , " << b << " and " << c << " are not //NOT sides of triangle";
    }
}