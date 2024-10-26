#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Hello World!";
    // cout << str << endl;
    // str[0]='u';
    // cout << str << endl;
    char ch[]={'a','b','c','d','e'};
    int i=0;
    while(ch[i]!='\0'){
        if(i%2==0)
        ch[i] = 'a';
        cout<<ch[i]<<" ";
        i += 1;
    }
    return 0;  
}