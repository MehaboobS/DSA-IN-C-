#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int  n;
    cout << "enter the number of elements" << endl;
    cin >> n;
    vector<int> v(n),v1(n);
    
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   
    for (int i = n-1; i >=0; i--)
    {
        v1[i] = v[n- i-1];
    }
    for (int i = 0; i < n;i++){
        cout << v1[i] << endl;
    }
        return 0;
}