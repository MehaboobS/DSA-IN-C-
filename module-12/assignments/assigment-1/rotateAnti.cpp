#include <iostream>
using namespace std;
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
    int trap[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trap[i][j] = arr[j][i];
        }
        cout << endl;
    }
    cout << "display\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << trap[i][j] << " ";
        }
        cout << endl;
    }
    for(int j=0; j < n;j++){
        int i=0,k=m-1;
        while(i<=k){
            int temp=trap[i][j];
            trap[i][j]=trap[k][j];
            trap[k][j]=temp;
            i++;
            k--;
        }
    }
    cout<<"display\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << trap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}