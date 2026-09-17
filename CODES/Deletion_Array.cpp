#include <iostream>
using namespace std;
int main(){
    int n=5 , Index,temp;
    int Arr[5] = {2,3,4,5,6};
    cout << "Enter index number where you want to remove: " << endl;
    cin >> Index;
    for(int i=Index;i<n;i++){
        temp = Arr[i + 1];
        Arr[i] = temp; 
    }
    cout << "New Array is: " << endl;
    for(int i=0;i<n;i++){
        cout << Arr[i] << endl;
    }
    return 0;
}