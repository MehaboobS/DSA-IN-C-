#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // 10 bar gm likna hai 
//    for(int i=0;i<5;i++){
//        cout << "gm" << endl;
//    }
    // int count;
    // cout<<"enter the number of times to print hello : ";
    // cin>>count;
    // for (int i = 1;i<=count;i++){
    //     cout << "hello world\n";
    // }
    // for (int i = 2; i <=100;i+=2){
    //     cout << i << endl;
    // }
    // for(int i=1;i<11;i++){
        
    //         cout << i*19 << endl;
    // }
    // for (int j = 19;j<=190;j+=19){
    //     cout << j << endl;
    // }
    int terms;
    cout<<"enter the number of terms in a.p"<<endl;
    cin >> terms;
    int a=100,d=-3;
    cout << "_____A.P_____"<<endl;
    for (int i = 0;i<terms;i++){
        int res=a + (i) * d;
        if (res< 0)
           { cout << "sorry!!! i cannpt print negative terms therefore i have printed " <<  (i + 1) << " number of terms";
            break;}
        else cout << res << endl;
        
    }
    // int firstTerm,commonRatio;
    // cout << "Enter the first term and common ratio "<<endl;
    // cin >> firstTerm >> commonRatio;
    // int n;
    // cout << "enter the numbers of terms to be displayed in the G.P" << endl;
    // cin>>n;
    // cout << "_____G.P_____"<<endl;
    // for(int i=0;i<n;i++){
        
    //     cout << firstTerm << endl;
    //     firstTerm *= commonRatio;
    // }
    
    
        return 0;
}