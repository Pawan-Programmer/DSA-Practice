#include <iostream>
using namespace std;
int main(){
    int m,n,sum;
    cout << "Enter no. of rows: " << endl;
    cin >> m;
    cout << "Enter no. of columns: " << endl;
    cin >> n;
    int arr[m][n] ;
    cout << "Enter Elements of an Array" << 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
}
