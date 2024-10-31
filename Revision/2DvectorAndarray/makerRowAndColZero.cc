#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=3,n=3;
    vector<vector<int>>v(m,vector<int>(n,0));
   bool row[m];
   bool col[n];
    cout << "enter the elements: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
               row[i]=true;
               col[j] = true;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(row[i]==true)
        {
            for (int j = 0; j < n; j++)
            {
                v[i][j] = 0;
            }
        }
    }

    for(int j=0;j<n;j++){
        if(col[j]==true){
            for (int i = 0; i < m; i++)
            {
                v[i][j] = 0;
            }
        }
    }
    cout<<"displaying the elements: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}