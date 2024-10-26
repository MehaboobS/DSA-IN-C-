#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    m = n+1;
  
    int nst = n - 1;
    int nsp = 1;
    int pstar = n - 1;
    for (int i = 1;i<=2*n;i++){
          if(i<n){
            for(int j=1;j<=i;j++){
                cout << "* ";
            }
            for (int l = 1;l<=m;l++){
                cout << "  ";
            }
            m -= 2;
            for (int j = 1; j <= i;j++){
                cout << "* ";
            }
            cout << endl;
          }
            else if(i==n || i==n+1){
                for (int a = 1; a <= 2 * n - 1;a++){
                    cout << "* ";
                }
                cout << endl;
            }
            else{
                for (int j = 1;j<=nst;j++){
                    cout << "* ";
                }
                nst--;
                for (int k = 1; k <= nsp;k++){
                    cout << "  ";
                }
                nsp += 2;
                for (int l = 1; l <= pstar;l++){
                    cout << "* ";
                }
                pstar--;
                cout << endl;
            }
        
    }
        return 0;
}