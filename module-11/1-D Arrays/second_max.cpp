#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {67, 23, 45,12 , 78};
    int max = arr[0],sec=INT8_MIN;
    for(int j=0;j<5;j++){
        if(arr[j]>max && arr[j]>sec){
            sec = max;
            max = arr[j];}
        else{
            if( sec<max){
                sec = arr[j];
            }
        }
       
    }
    cout << "maximum value is " << max<<endl;
    cout << "second-maximum value is " << sec;
    return 0;
}