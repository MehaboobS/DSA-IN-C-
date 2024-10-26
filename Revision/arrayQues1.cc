#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=0,j=n-1,temp;
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i] = temp;
        }else if(arr[i]==0) {
            i++;
        }
        else
            j--;
       
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
} 
