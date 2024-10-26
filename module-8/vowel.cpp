#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if ((ch > 64 and ch < 92) || (ch > 96 and ch < 124))
    {
            cout << ch << " is a alphabet";
            if (ch == 'a')
            {
                cout << "vowel";
            }
            else if (ch == 'e')
            {
                cout << "vowel";
            }
            else if (ch == 'i')
            {
                cout << "vowel";
            }
            else if (ch == 'o')
            {
                cout << "vowel";
            }
            else if (ch == 'u')
            {
                cout << "vowel";
            }
            else
            {
                cout << "consonet";
            }
            
     }
     else {cout << ch << " is a not alphabet";}
   

            cout << "consonent";
        }
        return 0;
}