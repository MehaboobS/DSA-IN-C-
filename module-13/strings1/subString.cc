#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdef";
    cout << str.substr(0)<<endl;
    cout << str.substr(1)<<endl;
    cout << str.substr(2)<<endl;
    cout << str.substr(3)<<endl;
    cout << str.substr(4)<<endl;
    cout << str.substr(5) << endl;

    cout << str.substr(0,3) << endl;
    cout << str.substr(1,3) << endl;
    cout << str.substr(2,3) << endl;
    cout << str.substr(3,1) << endl;
    cout << str.substr(4,1) << endl;
    cout << str.substr(5,1) << endl;
    return 0;
}