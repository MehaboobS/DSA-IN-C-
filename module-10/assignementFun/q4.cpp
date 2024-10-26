#include<iostream>
using namespace std;
void count(int num){
    int count=0;
    while(num!=0){
        count++;
        num /= 10;
    }
    cout << "number of digits is : " << count << endl;
}
int main(){
  int n;
  cout<<"enter a number: ";
  cin >> n;
  count(n);
  return 0;
}