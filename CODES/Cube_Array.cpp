#include <iostream>
using namespace std;
int Cube(int Arr[],int n){
    int Arr1[n];
    for(int i=0;i<n;i++){
        Arr1[i]= Arr[i]*Arr[i]*Arr[i];
    }
    cout << "New Array : " << endl;
    for(int i=0;i<n;i++){
        cout << Arr1[i] << endl;
    }
    return 0;

}
int main(){
    int n=4;
    int Arr[n] = {2,6,8,3};
    Cube(Arr,n);
    return 0;
}