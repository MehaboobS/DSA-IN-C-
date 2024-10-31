#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin, str);
    int alpa[26]={0};
    for (int i = 0; i<26;i++){
        int idx = (int)str[i]-97;
        alpa[idx] += 1;
    }
    int max=alpa[0],idx;
    for( int i=1;i<26;i++){
        if(max<alpa[i]) {
            max=alpa[i];
            idx = i;
            }
    }
    char ch = (char)(idx + 97);
    cout<<"the maximum occuring character is "<<ch<<" which is occuring "<<max<<" times"<<endl;

        return 0;
}