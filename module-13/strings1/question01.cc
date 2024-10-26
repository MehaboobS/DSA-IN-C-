#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "enter the string: " << endl;
    getline(cin, s);
    reverse(s.begin()+2,s.begin()+5);
    cout << s;
    return 0;
}