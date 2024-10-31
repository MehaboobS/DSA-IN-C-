#include <iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    vector<string>string_list;
    
    while(ss >> temp){
        string_list.push_back(temp);
    }
    
    sort(string_list.begin(), string_list.end());
     int count=1,maxCount=0;
        string word;
    //     for(int i=0;i<string_list.size();i++){
    //         count=1;
    //         for(int j=i+1;j<string_list.size();j++){
    //             if(string_list[j]==string_list[i]){
    //                 count++;     
    //             }else{
    //             break;
    // }
    //     }
    //     if(count>maxCount){
    //         maxCount=count;
    //         word=string_list[i];
    //         }
    // }
   for(int i=1;i<string_list.size();i++){
    if(string_list[i]==string_list[i-1]){
        count++;
   }else
       count = 1;
     maxCount=max(maxCount,count);
     word=string_list[i-1];}  
 cout<<"max frequency "<<maxCount<<" and the word is "<<word<<endl;
    
    return 0;
}