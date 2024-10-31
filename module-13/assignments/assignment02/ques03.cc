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
    vector<string>sub;
    for(int i=0;i<str.length();i++){
        string sub_str;
        for(int j=i;j<str.length();j++){
            sub_str = str.substr(i, j + 1);
            sub.push_back(sub_str);
        }
        
       
    }
    for(int k=0;k<sub.size();k++){
        cout << sub[k] << endl;
    }
    int no_sub = 0;
    for(int i=0;i<sub.size();i++){
       int j,count=0,n=sub[i].size();
       for(j=0;j<n;j++){
        if(sub[i][j]=='a' || sub[i][j]=='e' || sub[i][j]=='i' || sub[i][j]=='o' || sub[i][j]=='u'){
            count++;
        }
       }
       if(count==n){
        no_sub+=1;
       }
    }
    cout<<"no of sub strings with on vowels is "<<no_sub<<endl;
    return 0;
}
