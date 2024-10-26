#include <iostream>
#include <vector>
using namespace std;

int main(){
//   1-d vector
//   vector<int>v(9,678);
//   cout<<v[0]<<" ";
//   cout << v[1] << " ";
//   cout << v[2] << " ";
//   cout << v[3] << " ";
//   cout << v[4] << " ";
//   cout << v[5] << " ";
//   cout << v[6] << " ";
//   cout << v[7] << " ";
//   cout << v[8] << " ";
vector<vector<int>> v(5, vector<int>(4, 1390));
for (int i = 0;i<5;i++){
    for (int j = 0;j<4;j++){
        cout<<v[i][j]<<" ";

    }
    cout << endl;
}
cout<<endl<<v.size();
cout << endl
     << v[0].size();

return 0;
}