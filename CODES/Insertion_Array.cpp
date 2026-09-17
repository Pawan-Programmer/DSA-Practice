#include <iostream>
using namespace std;
int main(){
    int n , index , insert_Element;
    cout << "Enter size of an array: ";
    cin >> n;
    n = n + 1;
    int Arr[n] , temp;
    cout << "Enter Elements of Array: " << endl;
    for(int i=0;i<n-1;i++){
        cin >> Arr[i];
    }
    cout << "Enter an Insertion Element: " << endl;
    cin >> insert_Element ;
    cout << "Enter Insertion's Index number: " << endl;
    cin >> index ;
    for(int i=n;i>=index;i--){
        temp = Arr[i-1];
        Arr[i] = temp;
    }
    Arr[index] = insert_Element;
    cout << "New Array: " << endl;
    for(int i=0;i<n;i++){
        cout << Arr[i] << " " ;
    }

    return 0;
}