#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows : ";
    cin>>n;
    m = n;
    for (int i = 1; i <= n;i++)
    {
        for (int k = i; k > 1;k--){
            cout << "  ";
        }
        for (int j = 1; j <= 2 * m - 1;j--){
            cout << m << " ";
        }
        m--;
        cout << endl;
    }
        return 0;
}