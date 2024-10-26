#include<iostream>
using namespace std;
int main(){
    int num,rem,sum=0,copy=0;
    cout<<"enter a number to find the sum of even digits: ";
    cin>>num;
    copy = num;
    while(num!=0){
        rem = num % 10;
        if(rem%2==0) sum+=rem;
        num /= 10;
    }
    cout << "OUTPUT: " << copy<<endl;
    cout << "SUM: " << sum;
}