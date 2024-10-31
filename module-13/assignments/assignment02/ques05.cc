#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;
int main()
{
    string str;
    cout << "enter the string: " << endl;
    getline(cin, str);
    string temp;
    stringstream ss(str);
    vector<string> list;
    while(ss>>temp){
        list.push_back(temp);
    }
    sort(list.begin(), list.end());
    cout << "laxograpically max element is : " << list[list.size() - 1];
    return 0;
}   
