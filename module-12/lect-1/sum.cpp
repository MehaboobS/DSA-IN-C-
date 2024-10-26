#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columes: " << endl;
    cin >> m >> n;
    int arr[m][n];
    int sum=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
                sum+=arr[i][j];
        }
    }
    cout << "SUM element is : " << sum << endl;
    return 0;
}