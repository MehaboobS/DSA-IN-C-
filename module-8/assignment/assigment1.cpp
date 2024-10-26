#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout << "enter the co-ordinates of first,sec,third points respectively" << endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (area== 0)
    {
        cout << area<<endl;
        cout << "all three points lies on a single line";
    }
    else
    {
        cout << area<<endl;
        cout << "all three points NOT lies on a single line";
    }
        return 0;
}