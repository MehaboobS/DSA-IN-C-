#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // login
    int low=0,high=n-1,mid=0;
    while(low<=high){
     mid=(low+high)/2;
     if(arr[low]<arr[mid]){
        low++;
     }else if(arr[high]>arr[mid]){
        high--;
    }else{
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
    }
    }
    cout << "displaying the sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}