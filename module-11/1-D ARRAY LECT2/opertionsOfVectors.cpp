#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);

    v.push_back(1);
    
    v.push_back(78);

    v.push_back(34);
    for (int i = 0; i < v.size();i+=1){
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << v[i] << " ";
    }
    return 0;
}