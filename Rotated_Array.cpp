#include <iostream>
using namespace std;
int RotatedArray(int Arr[] , int n){
    int temp;
    for(int i=0;i<n;i++){
        Arr[n-1] = Arr[i];
        temp = Arr[i];
        Arr[i] = Arr [i+1];
        Arr[i+1] = temp;
    }
    cout << "New Array" ; 
    for(int i=0; i<n;i++){
        cout << " " << Arr[i] << endl;
    }
    return 0;
}
int main(){
    int n = 6;
    int Arr[6] = {3,6,1,2,8,7};
    RotatedArray(Arr , n);
    return 0;
}