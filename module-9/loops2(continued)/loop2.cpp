#include<iostream>
using namespace std;
int main(){
    int checkPrime,count=0;
    cout<<"Enter a number for check for the prime number : ";
    cin >> checkPrime;
    if(checkPrime==1){
        cout << "1 is nither prime nor composite ";
        return 0;
    }
    for (int i = 2;i<checkPrime;i++){
        if(checkPrime%i==0){
            cout << checkPrime << " is a composite number" << endl;
            count = 1;
            break;
            
        }
        else continue;
    }
    if(count==0)
        cout << checkPrime << " is a prime number" << endl;
        return 0;
}