#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                cout << j<<" ";
            }
            cout << endl;
        }
        else
        {
            int a = 1;
            for (int j = 1; j <= n - i; j++)
            {
                cout <<a<< " ";
                a++;
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "  ";
                a++;
            }
            for (int l = n - i; l > 0; l--)
            {
                cout <<a<< " ";
                a++;
            }
            cout << endl;
        }
    }
    return 0;
}