#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int l = i; l > 1;l--){
            cout <<"* ";
        }
        cout << endl;
    }
    int oddCount = 0;
    int m=2*n-1;
    for(int i=n+1;i<=m;i++){
        for (int j = i; j > n;j--){
            cout << "  ";
        }
        if ( i==n+1){

            oddCount = n+m-i-1;
        }
       

        for(int j=1;j<=oddCount;j++){
            cout << "* ";
        }
        oddCount -= 2;
        cout << endl;
    }
    return 0;
}