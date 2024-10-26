#include<iostream>
using namespace std;
int fact(int a)
{
    if (a == 1)
        return 1;
    int p = 1;
    for (int i = 1; i <= a; i++)
    {
        p *= i;
    }
    return p;
}
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
void pascel(int n){
    int nsp = n;
    for (int i = 0; i <= n;i++){
        for (int j = 1; j <= nsp;j++){
            cout << "  ";
        }
        nsp--;
        for (int j = 0; j <= i; j++)
        {
            int res = combination(i, j);
            cout << res << "   ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin>>n;
    pascel(n);
    return 0;
}