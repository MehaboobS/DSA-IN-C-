#include<iostream>
using namespace std;
int fact(int a)
{    
    if (a==1)
        return 1;
    int p = 1;
    for (int i = 1; i <= a; i++)
    {
        p *= i;
    }
    return p;
}
int combination(int n,int r){
    return fact(n) / (fact(r) * fact(n - r));
}
int permutation(int n,int r){
    return fact(n) / fact(r);
}

int main(){
    int n,r;
    cout<<"enter the value of n : ";
    cin>>n;
cout<<"Enter the value of r : ";
cin>>r;
int combRes = combination(n, r);
int perRes = permutation(n, r);
cout << n << "C" << r << " = " << combRes << endl;
cout << n << "P" << r << " = " << perRes;
return 0;
}