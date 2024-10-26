#include<iostream>
using namespace std;
int main(){
    int checkArmStrong,cubeSum=0,rem,copy;
    cout << "Enter a number : ";
    cin>>checkArmStrong;
    copy = checkArmStrong;
    while(checkArmStrong!=0){
        rem = checkArmStrong % 10;
        cubeSum += rem * rem * rem;
        checkArmStrong /= 10;
    }
    if(cubeSum==copy){
        cout << "ARMSTRONG NUMBER" << endl;
    }else{
        cout << "NOT A ARMSTRONG NUMBER" << endl;
    }
}