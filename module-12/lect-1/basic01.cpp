#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
   // int arr[][3]={1,2,3,4,5,6,7,8,9};
    // invalid int arr[2][]={1,2,3,3,54,5,6,77,8,8};
    // rows-3 col-3
    // arr[0][0]=4;
    // arr[1][2] = 8;
   //  cout << arr[0][0] << " " << arr[0][1];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
    return 0;
}