#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int m=3,n=3;
    cout<<"enter the elements: "<<endl;
    vector<vector<int>>v(n,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }    
    int minr=0,minc=0;
    int maxr=m-1;
    int maxc = n - 1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            cout << v[minr][i] << " ";
        }
        minr++;
        if(!(minr<=maxr && minc<=maxc))break;
        for(int j=minr;j<=maxr;j++){
            cout <<v[j][maxc] << " ";
        }
        maxc--;
        if (!(minr <= maxr && minc <= maxc))
            break;
        for (int k = maxc; k >= minc;k--){
            cout << v[maxr][k] << " ";
        }
        maxr--;
        if (!(minr <= maxr && minc <= maxc))
            break;
        for(int l=maxr;l>=minr;l--){
            cout << v[l][minc] << " ";
        }
        minc++;
    }

    return 0;
}