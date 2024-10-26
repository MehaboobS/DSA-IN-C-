#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter the number of rows and columes: " << endl;
    cin>>n>>m;
    for (int i = 1;i<=n;i++){
        cout << i << " ->> ";
        for (int j = 1;j<=m;j++){
            cout <<j*i<< "  ";
        }
        cout << endl;
    }

        return 0;
}