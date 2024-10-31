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
    int n = str.length();
    cout << str << endl;
    reverse(str.begin() + n / 2, str.end());
    cout << str;
    return 0;
}