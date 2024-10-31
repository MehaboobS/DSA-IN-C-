#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string str;
    cout << "enter the string : ";
    cin >> str;
    int count = 0;
    int i = 0, j = str.length() - 1;
    bool flag = false;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            cout<<"not palinodrome";
            flag = true;
            break;
        }
    }
    if(flag==false)
        cout << "palindeome";
    return 0;
}