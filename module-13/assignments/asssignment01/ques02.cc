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
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'o'&&  str[i] != 'i' && str[i]!='u'){
            count++;
        }
    }
    cout << "number of consunents : "<<count;

    return 0;
}