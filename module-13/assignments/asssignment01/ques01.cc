#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
    cout << str;

    return 0;
}