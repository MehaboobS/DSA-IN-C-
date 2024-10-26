#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of rows : ";
    cin>>n;
    int nsp, nst;
    nsp = n - 1;
    nst=1;
    for (int i = 1; i <= 2 * n - 1;i++){
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        
        if (i < n)
            nsp--;
        else
            nsp++;
           
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        if (i <= n-1)
            nst += 2;
        else
            nst -= 2;
        cout << endl;
    }
    return 0;
    }
       
    
        
