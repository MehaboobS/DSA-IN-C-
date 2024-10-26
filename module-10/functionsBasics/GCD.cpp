#include<iostream>
using namespace std;
void gcd(int a,int b){
    int hcf=1;
    for (int i = min(a, b); i >= 1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    cout << "HCF = " << hcf;
}
int main(){
    int a, b;
    cout<<"enter two number : ";
    cin>>a>>b;
    gcd(a, b);
    return 0;
}