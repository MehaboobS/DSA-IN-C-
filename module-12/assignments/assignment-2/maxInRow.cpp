#include <iostream>
#include <vector>
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
    
    vector<int> sum;
    int s;
    for (int i = 0; i < m; i++)
    {
        s = 0;
        for (int j = 0; j < n; j++)
        {
            s += arr[i][j];
        }
        sum.push_back(s);
    }
    int max = sum[0];
   for(int i=1;i<sum.size();i++) {
    if(max<sum[i]) max=sum[i];
   }
   cout<<"MAx sum = "<<max<<endl;
    return 0;
}