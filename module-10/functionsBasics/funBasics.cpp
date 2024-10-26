#include<iostream>
using namespace std;
void calledFunctionName(int funArgs){
    cout << "i am going to purint the argument you passed : ";
    cout << funArgs;
    return;
}
int main(){
    int funArgs;
    cout << "enter a Argument to pass to a function : ";
    cin >> funArgs;
    calledFunctionName(funArgs);
    return 0;
}