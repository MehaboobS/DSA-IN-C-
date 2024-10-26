#include<iostream>
using namespace std;
int main(){
    int weekDay;
    cout << "enter a week day number";
    cin >> weekDay;
    switch(weekDay){
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "monday";break;
        case 3:
            cout << "tuesday";break;
        case 4:
            cout << "wednesday";
            break;
        case 5:
            cout << "thruday";break;
        case 6:
            cout << "friday";break;
        case 7:
            cout << "saturdday";break;
            default:
                cout << "do this it is invalid expression";
    }
}