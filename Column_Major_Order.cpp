#include <iostream>
using namespace std;
int main(){
    int m,n;
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
    cout << "------------------------------\n";
    //Print Array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] ;
            cout << " ";
        }
        cout << endl;
    }
    cout << "------------------------------\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[j][i] ;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}