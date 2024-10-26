#include <iostream>
using namespace std;
int main()
{
    // int radius,height;
    // cout << "Enter the radius and height of the cylinder to find the vol. :" << endl;
    // cin>>radius>>height;
    // float vol = 3.14 * radius * radius * height;
    // cout << "Volume of cylinder : " << vol;
    char ch1,ch2;
    
    cout << "Enter the two charcters to find the corresponding values:" << endl;
    cin >> ch1 >> ch2;
    int asciiDiff = ch1 - ch2;
    cout << "ASCII VALUE DIFFERENCE IS :" << asciiDiff;
    return 0;
}
