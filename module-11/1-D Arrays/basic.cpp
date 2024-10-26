#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the range of integers: ";
    cin>>a>>b;
    for (int i = a; i < b;i++){
        int checkPrime=i;
        bool flag = false;
        for (int j = 2;j<checkPrime;j++){
            if(checkPrime%j==0){
                
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout << checkPrime << " is prime\n";
        }

      
    }
        return 0;
}