#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of non-zero elements in v1 and v2: "<<endl;
    cin>>m>>n;
    vector <int>v1(m+n,0);
    vector <int>v2(n,0);
    cout<<"enter the v1 elements in sorted order: "<<endl;
    for(int i=0;i<m;i++){
        cin >> v1[i];
    }
    cout << "enter the v2 elements in sorted order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    int i=m-1,j=n-1,k=m+n-1;
    while(k>=0){
        if(j>=0 && v2[j]>=v1[i]){
            v1[k]=v2[j];
            j--;
            k--;
        }else{
            v1[k]=v1[i];
            i--;
            k--;
        }
    }
    cout << "combined v1 and v2 in sorted order: " << endl;
    for(int i=0;i<m+n;i++){
        cout << v1[i] << " ";
    }
    return 0;
}