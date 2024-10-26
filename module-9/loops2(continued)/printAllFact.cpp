#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cout << "Enter a number till that number be shall find the factorial of all the numbers : " << endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        p=p*i;
        cout << i << " ! = " << p<<endl;
    }
}