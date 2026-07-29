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
    //for largest
    int ans = Arr[1];
    for(int i=2;i<=size;i++){
        if(ans<Arr[i]){
            ans = Arr[i];
        }
    }
    cout << "Largest number is: " << ans << endl;
    return 0;
}