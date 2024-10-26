#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columes: " << endl;
    cin >> m >> n;
    int arr[m][n],trap[n][m];
    
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

            trap[i][j] = arr[j][i];
        }
    }
   cout<<"displaying matrix element: "<<endl;
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout<< arr[i][j]<<" ";
       }
       cout << endl;
   }

   cout << "displaying transpose matrix element: " << endl;
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