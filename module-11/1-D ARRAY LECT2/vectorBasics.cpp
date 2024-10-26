#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(6);
    // cout << v[0] << endl;
    // // v.push_back(8);
    // // v.push_back(10);
    // // for (int i = 0; i < 3; i++)
    // // {
    // //     cout << v[i] << " ";
    // // }
    // // cout << endl;
    // v[0] = 122;
    // // for (int i = 0;i<3;i++){
    // //     cout << v[i] << " ";
    // // }
    // cout << v[0] << endl;
    v.push_back(6);
    cout << v.capacity() << " " << v.size() << endl;
    v.push_back(1);
    cout << v.capacity() << " " << v.size() << endl;
    v.push_back(78);
    cout << v.capacity() << " " << v.size() << endl;
    v.push_back(34);
    cout << v.capacity() << " " << v.size() << endl;
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";
    return 0;
}