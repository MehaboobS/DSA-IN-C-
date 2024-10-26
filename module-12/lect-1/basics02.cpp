#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows and columes: "<<endl;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << "displaying array elements: " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}