#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3, 5, 6, 8, 12};
    for (int i = 0; i < 5;i++){
        if (i==4)
            break;
        if((arr[i+1])!=arr[i]+1){
            cout << "smallest missing postive integer is " << arr[i] + 1<<endl;
            break;
        }
    }
}