#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,n;
    cout<<"enter the number of elements"<<endl;
    cin >> n;
    vector<int> v(n);
    cout << "enter the elements" << endl;
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    cout << "enter the sum value: " << endl;
    cin >> x;
    for(int i=0;i<n;i++){
        for (int j = i + 1;j<n;j++){
            if(v[i]+v[j]==x){
                cout << "(" << i << " , " << j << ")" << endl;
            }
        }
    }
        return 0;
}