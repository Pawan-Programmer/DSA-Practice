#include <iostream>
using namespace std;
int main(){
    //Insertion of value in Array 
    int n,value,temp;
    int Arr[100];
    cout << "Enter size of an Array: " << endl;
    cin >> n;
    cout << "Enter Elements of an Array: " << endl;
    for(int i=0;i<n;i++){
        cin >> Arr[i];
    }
    int pos;
    cout << "Enter index number:" << endl;
    cin >> pos ;
    cout << "Enter value :" << endl;
    cin >> value ;
    Arr[pos] = value;
    for(int i=n-1;i>=pos;i--){
        Arr[i] = Arr[i-1];
    }
    cout << "New Array is: " << endl;
    for(int i=0 ;i<n;i++){
        cout << Arr[i] << endl;
    } 
    return 0;
}