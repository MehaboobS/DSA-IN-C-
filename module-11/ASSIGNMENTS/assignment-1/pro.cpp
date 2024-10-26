#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int p = 1;
    for(int i=0;i<4;i++){
        p = p * arr[i];
    }
    cout << "prod of all the elements is : " << p;
    return 0;
}