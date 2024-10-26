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
    int max=arr[0][0];
    for (int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
           if(max<arr[i][j])
               max = arr[i][j];
        }
    }
    cout << "max is: " << max;

    return 0;
}