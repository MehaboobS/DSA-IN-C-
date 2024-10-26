#include<iostream>
using namespace std;
int main(){
    int n,nsp,nst;
    cout<<"Enter the number of rows: ";
    cin>>n;
    nst=n-1;
    nsp = 1;
    for (int i = 1;i<=2*n-1;i++){
        if(i==1 || i==2*n-1){
            for (int j = 1; j <= 2 * n - 1;j++){
                cout << "* ";
            }
            cout << endl;
        }else{
            for (int k = 1; k <= nst;k++){
                cout << "* ";
            }
           
            for (int l = 1; l <= nsp;l++){
                cout << "  ";
            }
            if(i<=n-1){
                nsp+=2;
            }else{
                nsp-=2;
            }
            for (int k = 1; k <= nst; k++)
            {
                cout << "* ";
            }
            if (i <= n - 1)
            {
                nst--;
            }
            else
            {
                nst++;
            }
            cout << endl;
        }
    }
        return 0;
}
