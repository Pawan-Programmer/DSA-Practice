#include <iostream>
using namespace std;
int sorted(){
    int n = 5,flag=0;
    int Arr[5] = {2,3,4,5,6};
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
    return sorted();

}
int main(){
    sorted();
    return 0;

}