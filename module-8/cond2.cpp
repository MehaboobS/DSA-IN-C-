#include<iostream>
using namespace std;
int main(){
    float cp, sp, pro, loss;
    cout << "entrer the cost prize and selling prize respectively" << endl;
    cin>>cp>>sp;
    if (sp>cp){
        pro=sp-cp;
        cout << "Profit : " << pro;
    }
    else if(cp==sp){
        cout << "neither profit nor loss" << endl;
    }
    else{
        loss=cp-sp;
        cout << "loss :" << loss;
    }
    return 0;
}