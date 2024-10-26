#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the rows and columns:" << endl;
    cin >> m >> n;
    int arr[m][n];
    vector<int> v;
    cout << "enter the elements of the matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
         for()
    }
    
    return 0;
}