#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students"<<endl;
    cin >> n;
    int marks[n];
    ;
    for (int i = 0; i < n;i++){
        cout<<"enter the marks of roll number "<<i+1<<endl;
        cin >> marks[i];
        
    }
    for (int j = 0; j < n;j++){
        if (marks[j] < 35)
        {
            cout << "roll number " << j << " has sored less then 35\n";
        }
    }
        return 0;
}