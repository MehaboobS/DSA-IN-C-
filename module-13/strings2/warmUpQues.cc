#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout << "enter the string:" << endl;
    getline(cin, str);
    int i=0,n=str.length(),count=0;
    if(n==1){
       cout<<0<<endl;
    return 0;}
    if(n==2 && str[0]!=str[1]){
        cout<<1<<endl;
        return 0;
    }
    while(i<n){
        if(i>0 && i!=n-1){
            if(str[i-1]!=str[i] && str[i+1]!=str[i]){
                count++;
            }
        }else if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }else{
            if(str[i]!=str[i-1]){
                count++;
            }
        }
        i++;
    }
    cout<<"count: "<<count<<endl;

    return 0;
}