// learning the function call
#include<iostream>
using namespace std;
void greeting(){
    cout << "Good Morning!! " << endl;
    cout << "How are you?? " << endl<<endl;
    return;
}
int main(){
    // greeting();
    // greeting();
    // greeting();
    int a;

    for (int i = 1; i <= 3;i++){
        cin>>a;
        for (int j = 1; j <= a;j++){
            for (int k = 1;k<=j;k++){
                cout << "* ";
            }
            cout << endl;
        }
    }
        return 0;
}