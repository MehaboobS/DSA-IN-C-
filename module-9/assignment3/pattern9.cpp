#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
           if((i+j)%2!=0 || i+j==n+1 || i+j==2*(n+1)+1){
               cout << "* ";
           }else{
               cout << "  ";
           }
          
        }
        cout << endl;
    }
    return 0;
}