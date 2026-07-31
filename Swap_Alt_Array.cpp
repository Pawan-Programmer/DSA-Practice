#include <iostream>
using namespace std;
int Swap(int n,int Arr[]){
    int temp;
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            temp = Arr[i] ;
            Arr[i] = Arr[i+1];
            Arr[i+1] = temp;
        }
    }
    cout << "Swapped Array: " << endl;
    for(int i=0;i<n;i++){
        cout << "[" << Arr[i] << "]" << endl;
    }
    return 0;
    
}
int main(){
    int n=5;
    int Arr[n] = {2,3,8,2,9};
    Swap(n,Arr);
    return 0;
}