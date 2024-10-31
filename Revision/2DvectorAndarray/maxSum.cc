#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int m=3, n=4;
    vector<vector<int>> v(m,vector<int>(n,0));
    cout << "Enter the elements of the 2D vector: \n";  
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
   for(int i=0;i<m;i++){
    if(v[i][0]==0){
        // int k=0,j=n-1;
        // while(k<=j){
        //     int temp = v[i][k];
        //     v[i][k] = v[i][j];
        //     v[i][j] = temp;
        //     k++,j--;
        // }
        for(int i=0;i<m;i++){
            v[i][]
        }
    }
   }
   int noz=0,noo=0;

   for (int j = 0; j < n; j++)
   {
       noz = 0;
       noo = 0;
       for (int i = 0; i < m; i++)
       {
           if (v[i][j] == 0)
           {
               noz++;
           }
           else
           {
               noo++;
           }
       }

    if(noz>noo){
        int i=0,k=m-1;
        while(i<=k){
            int temp=v[i][j];
            v[i][j]=v[k][j];
            v[k][j]=temp;
            i++,k--;
        }
    }
   }
   cout << "Modified 2D vector: \n";
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout<< v[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}