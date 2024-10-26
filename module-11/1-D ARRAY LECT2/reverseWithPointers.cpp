#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;
    vector<int> v(n);
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0, j = n - 1,temp;
    while(i!=j){
        temp = v[i];
        v[i]=v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout << "elements after reversing without using extra array: " << endl;
    for(int i=0;i<n;i++){
        cout << v[i] << "  ";
    }
    return 0;
}