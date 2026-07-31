#include <iostream>
using namespace std;
int Avg(int n,int Arr[]){
    int Average, Sum=0;
    for(int i=0;i<n;i++){
        Sum = Sum + Arr[i];
    }
    Average = Sum / n;
    for(int i=0;i<n;i++){
        if(Average < Arr[i]){
            cout << "[" << Arr[i] << "]";
        }
    }


    return 0;
}
int main(){
    int n = 9;
    int Arr[n] = {2,3,8,9,4,6,5,19,10};
    Avg(n,Arr); 
    return 0;
}
