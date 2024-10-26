#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12, 23, 45, 45, 67};
    int *ptr=arr;  //ptr is ointing to first element
    // *ptr = 8;  //changing the value of 1st element
    // ptr++;  increment the pointer
    // *ptr = 16;  change the value of second element
    // ptr--;  again point to first element
    // for (int i = 0; i < 5;i++){
    //     cout << ptr[i] <<" ";
    // }
    // for (int i = 0;i<5;i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    for (int i = 0; i < 5; i++)
    {
        cout <<i[ptr] << " ";
        // ptr++;
    }
    // ptr = arr;

    return 0;
}