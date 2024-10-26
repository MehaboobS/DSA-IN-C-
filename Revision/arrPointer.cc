#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int *ptr=arr;
    // for(int i=0;i<10;i++){
    //     cout << ptr << "->" << *ptr<<endl;
    //     ptr += 1;
    // }
    vector<int>v;
    vector<int>v1(5);
    vector<int>v2(5,10);
    v.push_back(v1[0]);
    // cout << v.size() << " "
    //      << v.capacity();
    for(int i=0;i<5;i++){
        cout << v2[i] << " ";
    }
    return 0;
}