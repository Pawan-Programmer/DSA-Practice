#include <iostream>
using namespace std;

int Rotate_Matrix(int arr[10][10] , int n){
    int arr2[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr2[i][j] = arr[n-1-j][i];
            cout << " " ; 
        } 
        cout << endl;
    }
    cout << "Rotated Array is: " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr2[i][j];
        }
        cout << endl;
    }

    return 0;
}

int main(){
    int n;
    cout << "Enter size of a matrix" << endl;
    cin >> n;
    int arr[10][10] ;
    cout << "Enter Elements of an Array" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    Rotate_Matrix(arr, n);
    return 0;
}