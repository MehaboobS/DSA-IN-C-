#include<iostream>
#include<vector>
using namespace std;
int comb(int n,int k){
    if (k>n-k){
        k = n - k;
    }
    int result = 1;
    for(int i=1;i<n;i++){
      result = result * (n - i) / (i + 1);
    }
    return result;
}

int main(){
     int m=4,n=4;
     vector<vector<int>>v(m,vector<int>(n,0));
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v[i][j] = comb(i+j,j);
        }
     }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
     }

    return 0;
}