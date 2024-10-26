#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   int i=0,j=n-1;
   while(i<=j){
    if( v[j]==1){
        j--;
    }
    else if(v[i]==0){
        i++;
    }
    else if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j] = 1;
        i++;
        j--;
    }else{
        continue;
    }
   }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}