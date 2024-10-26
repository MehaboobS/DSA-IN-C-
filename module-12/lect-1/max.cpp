#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows and columes: "<<endl;
    cin>>m>>n;
    int max;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]>max)
               max = arr[i][j];
        }
       
    }
    cout << "MAX element is : " << max << endl;
    return 0;
}