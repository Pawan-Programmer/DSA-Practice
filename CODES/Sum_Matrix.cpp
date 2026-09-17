#include <iostream>
using namespace std;

int main(){
    int m,n,sum=0;
    cout << "Enter no. of rows: " << endl;
    cin >> m;
    cout << "Enter no. of columns: " << endl;
    cin >> n;
    int arr[m][n] ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "Sum of all elements of Matrix is: " << sum ;
    return 0;
}