#include <iostream>
using namespace std;
float area(int r)
{
    
    return 3.14*r*r;
}
int main()
{
    int r;
    cout << "enter the number : ";
    cin >> r;
   float arr= area(r);
   cout << " area: " << arr;
   return 0;
}