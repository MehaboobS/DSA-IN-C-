#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
       
        for (int k =i; k >=1;k--){
            cout << (char)(64 + k)<<" ";
        }
        for (int l = 1; l <i;l++){
            cout << (char)(65 + l) << " ";
        }
            cout << endl;
    }
    return 0;
}