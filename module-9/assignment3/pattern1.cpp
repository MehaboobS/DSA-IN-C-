#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n - i;j++){
            cout << "  ";
        }
        a = 1;
        for (int k = 1; k <= 2 * i - 1;k++){
            cout <<a<<" ";
            a++;
        }
        cout << endl;
    }
        return 0;
}