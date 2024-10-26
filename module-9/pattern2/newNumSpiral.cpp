#include <iostream>
using namespace std;
int main()
{
    int n, m,p,pn;
    cout << "enter the number of rows : ";
    cin >> n;
    m = n;
    p = n;
    pn = n;
    int nsp = 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int k = 1; k <=nsp; k++)
        {
            cout << p<<" ";
            p--;
        }
        p = n;
        if (i<=n-1) nsp++;
        else
            nsp--;
        for (int j = 1; j <= 2 * m - 1; j++)
        {
            cout << m << " ";
        }
        if(i<=n-1)
            m--;
        else m++;
        for (int x = pn; (x <= n && (i != 1 || i != 2 * n - 1)); x++)
        {
            cout << x << " ";
        }
        if (i <= n - 1)
            pn--;
        else
            pn++;

        cout << endl;
    }
    return 0;
}