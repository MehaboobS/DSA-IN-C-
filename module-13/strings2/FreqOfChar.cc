#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   sort(str.begin(), str.end());
   int i=0,n=str.length(),maxCount=0,count;
   char ch;
   for(int i=0;i<n;i++){
       count = 1;
       for (int j = i + 1; j < n; j++)
       {
           if (str[i] == str[j])
           {
               count++;
           }
    }
    
    if(maxCount<count){
        ch = str[i];
        maxCount=count;
    }
    
   }
   cout<<"Maximum consecutive duplicate characters: "<<maxCount<<" and the charater is "<<ch<<endl;
    return 0;
}