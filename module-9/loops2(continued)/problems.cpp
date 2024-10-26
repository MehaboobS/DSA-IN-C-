#include<iostream>
using namespace std;
int main(){
    // while('a'<'b')
    //     cout << "palindrome" << endl;
    // int i;
    // while(i=10){
    //     cout<<i<<endl;
    //     i += 1;
    // }
    // int t = 10;
    // while(t/=2){
    //     cout << "he;;p" << endl;
    // }
    int num,count=0;
   
    cout<<"Enter a number: ";
    cin >> num;
    while(num!=0){

        count += 1;

        num /= 10;
    }
    cout << "number of digit in the number is " << count;
    return 0;
}