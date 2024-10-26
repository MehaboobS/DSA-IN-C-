#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {11, 82, 399, 4};
    int min = arr[0];
    for (int i = 0; i < 4;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    cout << "minimum element is " << min;
    return 0;
    
}