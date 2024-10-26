#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        if (i==0){
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else{
            for (int j = 1;j<=n-i;j++){
                cout << "* ";
            }
            for (int k = 1; k <= 2 * i - 1;k++){
                cout << "  ";
            }
            for (int l = n - i; l > 0;l--){
                cout << "* ";
            }
            cout << endl;
        }
        

    }
    return 0;
}