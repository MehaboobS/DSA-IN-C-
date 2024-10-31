#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n = 4;
    int arr[n] = {1, 3,4,2};
    //    output 1,3,2,4
    int i = n-1,idx;
  while (i>0)
  {
    if(arr[i-1]<arr[i]){
        continue;
    }else{
        idx = i - 1;
        break;
    }
    i--;
  }
  cout << idx;
  int k=idx+1,j=n-1;
  while(k<=j){
    int temp=arr[k];
    arr[k]=arr[j];
    arr[j]=temp;
    k++;
    j--;
  }
  return 0;

}
