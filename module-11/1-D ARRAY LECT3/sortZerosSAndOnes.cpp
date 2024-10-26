#include<iostream>
#include<vector>

using namespace std;
int main(){
   
   int n,zeros=0,ones=0;
   cout<<"enter the size of array"<<endl;
   cin>>n;
   vector<int>v(n);
   for (int i = 0;i<n;i++){
    cin>>v[i];
   }
   for(int i=0;i<n;i++){
       if (v[i] == 0)
           zeros++;
       else
           ones++;
   }
   
   for(int j=0;j<zeros+ones;j++){
    if (j<zeros)
        v[j] = 0;
    else    v[j] = 1;
   }
   cout << endl;
   for(int i=0;i<n;i++){
       cout << v[i] << " ";
   }


       return 0;
}