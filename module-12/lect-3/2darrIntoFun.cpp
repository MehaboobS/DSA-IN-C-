#include<iostream>
#include<vector>
using namespace std;
void change(int arr[]){
    arr[2] = 3;
}
void change2D(int arr[3][3]){ //both size must be passed
    arr[0][0] = 100;
}
int main(){
    // int a[3]={1,2,4};
    // cout << a[2] << endl;
    // change(a);
    // cout << a[2];
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
    return 0;
}