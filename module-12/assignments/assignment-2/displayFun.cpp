#include <iostream>
using namespace std;
void display(int arr[][],int m,int n){
  for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "enter the rows and columns:" << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "enter the elements of the matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    display(arr, m, n);

    return 0;
}