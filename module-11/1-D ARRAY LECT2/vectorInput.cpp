#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for (int i = 0; i < 5;i++){
        int x;
        cout<<"enter the value to push: ";
        cin >> x;
        v.push_back(x);
    }
    cout<<"displaying elements \n"<<endl;
    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
        return 0;
}