#include <iostream>
#include <vector>
using namespace std;
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[j];
        v[j] = v[i];
        v[i] = temp;
        i++;
        j--;
    }
    return;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return;
}
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
    display(v);
    cout << endl;
    reversePart(0,3,v);
    display(v);
    return 0;
}