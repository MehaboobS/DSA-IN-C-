#include<iostream>
using namespace std;
void square(int num){
    for(int i=1;i<=num;i++){
        cout << i * i << endl;
    }
    return;
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin >> num;
    square(num);
    return 0;
}