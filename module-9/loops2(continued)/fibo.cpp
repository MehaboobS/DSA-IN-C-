#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n value:"<<endl;
    cin>>n;
    int a = 1, b = 1,sum;
    for (int i = 2;i<n;i++){
        sum=a+b;
        a=b;
        b = sum;
    }
    cout << n << " th febo number is " << sum << endl;
    return 0;
}