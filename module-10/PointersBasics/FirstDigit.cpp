#include<iostream>
using namespace std;
void fl(int *ptr){
    int rem;
    rem = (*ptr) % 10;
    while(true){
    if(*ptr<=9)
            break;
     else  *ptr=(*ptr)/10;
      
    }
    cout<<"last-digit : "<<rem<<endl;
    cout << "first-digit : " <<*ptr;

}
int main(){
    int num;
    cout<<"Enter a number to check for first and last digit : ";
    cin>>num;
    fl(&num);
    return 0;
}