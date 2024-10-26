#include <iostream>
using namespace std;
int main()
{
    int n, a,var;
    cout << "enter the number of rows : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        var = 1;
        if (i == 0)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                cout <<var << " ";
                if(j<n)
                    var++;
                    else
                        var--;
            }
            cout << endl;
        }
        else
        {
            a = 1;
            for (int j = 1; j <= n - i; j++)
            {
                cout << a << " ";
                a++;
            }
            for (int k = 2 * i - 1; k >= 1; k--)
            {
                cout << "  ";
                
            }
            for (int j = 1; j <= n - i; j++)
            {
                a--;
                cout <<a << " ";
               
            }
            cout << endl;
        }
    }
    return 0;
}