#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter the string: " << endl;
    cin >> str;
    int max=int(str[0])-'0';
    int sec_max = 0;
    int i = 0;
    while(str[i]!='\0'){
        int num=int(str[i])-'0';
        cout << num << endl;
        if(num>sec_max && sec_max<max) sec_max=num;
        if(num>max)max=num;
       
        i++;
    }
    cout<<"MAX : "<<max<<endl;
    cout << "SECOND_MAX : " << sec_max << endl;
    return 0;
}