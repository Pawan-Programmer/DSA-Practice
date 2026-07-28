#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of an array: " << endl;
    cin >> size;
    int Arr[size];
    cout << "Enter elements: " << endl;
    for(int i=1;i<=size;i++){
        cin >> Arr[i];
    }
    int sum = 0,prdt=1;
    for(int i=1;i<=size;i++){
        if(i%2==0){
            sum = sum + Arr[i];
        }
        else{
            prdt = prdt*Arr[i];
        }
    }
    cout << "Sum of even index terms is: " << sum << endl;
    cout << "Product of odd index terms is: " << prdt << endl;
    return 0;
}