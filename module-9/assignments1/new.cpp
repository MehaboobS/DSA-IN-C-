#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0,copy;
    cout << "Enter a number: ";
    cin>>num;
    copy = num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num = num / 10;
    }
    int sum = rev + copy;
    cout << "reverse of the number is " << rev << "\n sum of the number is " << sum;
}