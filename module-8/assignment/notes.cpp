#include<iostream>
using namespace std;

int main(){
    int amount,max_deno_note;
    cout << "Enter the amount : ";
    cin >> amount;
    int deno[8] = {0};
    int notes[8] ={5, 10, 20, 50, 100, 200, 500, 2000};
    while(amount!=0){
        while (amount > 2000)
        {
            deno[7] += 1;
            amount -= 2000;
           
        }
        for (int i = 0; i < 8;i++){
            if(amount>notes[i]){
                if(notes[i+1]==amount){
                    deno[i+1]+=1;
                    amount -= notes[i + 1];
                    break;
                }
                if(notes[i+1]>amount) {
                    deno[i]+=1;
                    cout << notes[i]<<"___"<<(deno[i])<<endl;
                    amount -= notes[i];
                    
                    break;
                }else continue;
            }
            

        }
    }
    for (int j = 0; j < 8;j++){
        cout << deno[j]<< endl;
    }
        return 0;
}