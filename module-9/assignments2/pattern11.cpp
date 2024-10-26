#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n + 1; i <= 2 * n - 1;i++){
        for (int j = i - n; j >= 1;j--){
            cout << "  ";
        }
        for (int k = 1; k > (i - n);k--){
            cout << "* ";
        }
        cout << endl;
    }           
        return 0;
}