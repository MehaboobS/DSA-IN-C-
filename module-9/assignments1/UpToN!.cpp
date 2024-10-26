#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number: ";
    cin>>num;
    int p=1;
    for (int i = 1; i <= num;i++){
        p *= i;
        cout << i << " != " << p<<endl;
    }
    return 0;
}