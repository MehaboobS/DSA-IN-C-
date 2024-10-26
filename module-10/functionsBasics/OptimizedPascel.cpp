#include <iostream>
using namespace std;

void pascel(int n)
{
    int nsp = n;
    
  
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
           cout <<curr<<"  ";
           curr = (i - j) * curr / (j + 1);
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pascel(n);
    return 0;
}