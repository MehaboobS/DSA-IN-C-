#include <iostream>
using namespace std;
int main()
{
    int  n;
    cout << "enter the order of matrix : " << endl;
    cin  >> n;
    int arr[n][n];

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "displaying matrix element before transpose: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j)
                continue;
            
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            
            
        }
    }
    cout << "displaying matrix element after transpose: " << endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}