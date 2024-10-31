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
    int n = str.length() ;
    int int_value = 0;
    int i = n - 1;
    int multi = 1;
    
    while (i>=0)
    {
        int value = int(str[i])-'0';
        cout << value << endl;
        int_value += value * multi;
        multi=multi*10;
        cout << int_value << endl;
        i--;
   }
   cout << int_value;
   return 0;
}