#include<iostream>
#include<string>

using namespace std;
int main(){
    string str="Mehaboob is king of kings";
//    int size= str.length();
//    cout << str << endl;
   
//    str.push_back('a');
//       str.push_back('g');
//          str.push_back('s');

//    cout << str<<endl;
//    str.pop_back();
//    str.pop_back();
//    cout << str;

//   string str1="this is string-1 ";
//   string str2="this is string-2";
//  char x ='0';
//   string str3=str1+str2+x+"thsiidhbcsai";
//   cout << str3;

    string str1 = "thisIsMehaboob";
    cout << str1<<endl;
    reverse(str1.begin()+2,str1.end());
    cout << str1<<endl;
    return 0;
}
