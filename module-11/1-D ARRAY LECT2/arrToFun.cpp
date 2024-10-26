#include<iostream>
using namespace std;
void display(int* a){ //address of first element of array  int a[]
   for(int i=0;i<5;i++){
       cout << a[i] << " ";
   }
   cout << endl;
   return;
}
void change(int* b){  //int b[]
    b[0] = 100;
}
int main(){
    int arr[]={1,2,3,4,5};
    // accessing the elements after passing to another function
    // pass by value or pass by refernce
    display(arr);
    change(arr);
    display(arr); // calling the functiton
    return 0;
}