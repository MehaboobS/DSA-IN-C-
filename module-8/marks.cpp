#include <iostream>
#include<stdexcept>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<array>
#include<malloc.h>

using namespace std;
int main(){
    int marks;
    cout<<"enter the Grade::";
    cin>>marks;
    if (marks>=90){
        cout << "Grade : A";
    }else if (marks>=80){
        cout << "Grade :B";
    }
    else if (marks >= 70)
    {
        cout << "Grade :C";
    }
    else if (marks >=60)
    {
        cout << "Grade :D";
    }
    else
    {
        cout << "No grade for your marks";
    }
}