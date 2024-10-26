#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> v(n);
     for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i=0,j=n-1;
    while(i<j){
        if(v[i]>0){
            i++;
        }
        else if(v[j]<0){
            j--;
        }
        else if(v[i]<0 && v[j]>0){
            int temp=v[i];
            v[i]=v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}