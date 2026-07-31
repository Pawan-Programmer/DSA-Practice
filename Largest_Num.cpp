#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int Arr[5] = {2,8,6,3,4};
    int L = Arr[0];
    int L2 = Arr[0];
    for(int i=0;i<n;i++){
        if(Arr[i]>L){
            L = Arr[i];
        }
        else if(Arr[i]>L2){
            L2 = Arr[i];
        }
    }
    cout << "First Largest is: " << L << endl;
    cout << "Second Largest is: " << L2 << endl;
    return 0;
}