#include<iostream>
using namespace std;
int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int n = sizeof(num)/sizeof(num[0]);
    cout << n;
    cout << &num;
    for (int j = 0; j < 5;j++){
        cout << "\n"
             << &num[j] << endl;
    }
        return 0;
}