#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str="name is   king";
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}