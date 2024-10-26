#include <iostream>
using namespace std;
// int brr[5];
// bool check_not(int value){
//     bool flag = false;
//     for(int j=0;j<5;j++){
//         if(value!=brr[j]){
//             flag = true;
//         }
//     }
// }

int main()
{
    int arr[6] = {11,11, 82,82,4 ,4};
    
    for (int i = 0; i < 6;i++){
       int dup=arr[i];
       for (int j = i+1; j < 6;j++){
        if(arr[j]==dup){
            cout << arr[j] << " is dup" << endl;
            break;
        }
       }
    }
        return 0;
}