#include<iostream>
using namespace std;
int main(){
    // char ch;
    // cout << "enter a character to check for alphabet:" << endl;
    // cin>>ch;
    // if ((ch>64 and ch <92) || (ch >96 and ch<124)){
    //     cout << ch << " is a alphabet";
    // }else{
    //     cout << ch << " is a not alphabet";
    // }
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if (num%3==0 ){
        if (num % 5 == 0)
        {
            cout << num << " is divisable by 5 and 3 ";
        }
        else
        {
            cout << num << " is divisabble  3 but not by 5";
        }
    }else{
        cout << num << " is not divisable by neither 5 nor 3";
    }
    return 0;
}
