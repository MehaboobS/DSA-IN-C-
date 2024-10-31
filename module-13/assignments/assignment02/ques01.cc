#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout << "enter the string: " << endl;
    cin>>str;
    string rev_str=str;
    // int n=str.length();
    // for(int i=0; i<n; i++){
    //     rev_str[n - i + 1] = str[i];
    // }
    // cout << rev_str<<endl;
    // string rev_str = reverse_copy(&str.begin(), &str.end());
    reverse(rev_str.begin(), rev_str.end());
    str=str+rev_str;
    cout << str;
    return 0;
}