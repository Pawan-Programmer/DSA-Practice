#include <iostream>
using namespace std;
int main(){
    int Arr1[5] = {1,2,3,4,5};
    int Arr2[5] = {};
    for(int i=0;i<5;i++){
        Arr2[i] = Arr1[i];
    }
    cout << "New Array is: " << endl;
    for(int i=0;i<5;i++){
        cout << Arr2[i] << endl;
    }
    return 0;
}