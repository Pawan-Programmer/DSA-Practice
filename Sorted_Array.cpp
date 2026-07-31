#include <iostream>
using namespace std;
int main(){
    int n = 5,flag=0;
    int Arr[5] = {10,9,8,7,6};
    for(int i=0;i<n;i++){
        if(Arr[i]<Arr[i+1]){
            flag = 1;
        }
    }
    for(int i=0;i<n;i++){
        if(Arr[i]>Arr[i+1]){
            flag = 2;
        }
    }
    if(flag == 1){
        cout << "Array is sorted in increasing order" << endl;
    }
    else{
        cout << "Array is sorted in decreasing order" << endl;
    }
    return 0;
}
