#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int m = 5, n = 5;
    vector<vector<int>>v(m,vector<int>(n,8923));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;

}