#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   string str1,str2;
   cout<<"enter two strings for checking as they are anagrams of each other or not "<<endl;
   cin>>str1>>str2;
   sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());
   int count = 0;
   for(int i=0;i<str1.length();i++){
    if(str1[i]==str2[i]){
        continue;
    }else{
        count = 1;
        break;
    }
   }
   if(count==0){
       cout << "anagrams of each other";
   }else{
       cout << "NOT anagrams";
   }
    return 0;
}