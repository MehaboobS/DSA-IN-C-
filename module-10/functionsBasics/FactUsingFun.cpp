#include<iostream>
using namespace std;
void fact(int m){
    int p=1;
    for (int j = 1;j<=m;j++){
        p *= j;
    }
    cout << m << " != " << p << endl;
}
int main(){
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    for (int i = 1;i<=n;i++){
        fact(i);
    }
    return 0;
}