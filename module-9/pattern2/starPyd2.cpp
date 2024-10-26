#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for (int i = 0; i < n;i++){
        for (int j = 1; j < n - i;j++){
            cout << "  ";
        }
        for (int k = 0; k <= i;i++){
            cout << "* ";
        }
        for (int l = i; l > 0;l-=1){
            cout << "* ";
        }
        cout << endl;
    }
        return 0;
}