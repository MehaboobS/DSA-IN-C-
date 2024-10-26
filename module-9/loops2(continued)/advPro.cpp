#include<iostream>
using namespace std;
int main(){
    int num,count=0,m,sum,rem,rev=0;
    cout << "enter the number:";
    cin >> num;
    m = num;
    sum = 0;
    while(num!=0){
        count += 1;
       rem=num%10;
       rev = rev * 10 + rem;
       sum += rem;
       num /= 10;
    }
    cout << "number of digits in " << m << " is " << count<<endl;
    cout << "sum of digits in " << m << " is " << sum<<endl;
    cout << "reverse of " << m << " is " << rev << endl;
    

    return 0;

}