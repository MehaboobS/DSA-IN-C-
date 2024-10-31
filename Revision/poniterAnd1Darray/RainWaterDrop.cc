#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int>prev(n);
    int max=-1;
    for(int i=0;i<n;i++){
        prev[i]=max;
        if(max<arr[i]){
             max=arr[i];
        }
        }
    vector<int> next(n);
    max=arr[n-1];
    next[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<arr[i]){
             max=arr[i];
        }
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        int waterLevel=min(prev[i],next[i])-arr[i];
        if(waterLevel>0){
            water+=waterLevel;
        }
    }
    cout<<"the total amount of water that can be trapped is: "<<water<<endl;

    return 0;
}