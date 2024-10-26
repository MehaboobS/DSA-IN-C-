#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
        v.push_back(8);
        v.push_back(9);
        v.push_back(10);
        v.push_back(6);
        v.push_back(78);
        int x = 6;
        for (int i = v.size()-1; i >= 0;i--){
            if(v[i]==x) {
                cout << " last occurence of " << x << " is " << i << endl;
                break;
            }
        }
        return 0;
    }