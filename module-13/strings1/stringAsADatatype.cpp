#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "MEHABOOB KING OF KINGS  S";
    // cout << str << endl;
    // string s;
    // cin>>s;
    // cout << s; 
    // cin works when we have no space
    // string s;
    // getline(cin, s);
    // cout << s;
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