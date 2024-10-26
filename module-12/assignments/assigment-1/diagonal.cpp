#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and columns:"<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the elements of the matrix"<<endl;
    for (int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
     for (int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
           if(i==j || i+j==m-1){
            cout<<arr[i][j]<<" ";
           }
           else{
               cout << "  ";
           }
        }
        cout << endl;
    }
    
        return 0;
}