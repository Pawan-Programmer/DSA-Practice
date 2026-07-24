#include <iostream>
using namespace std;
int main()
    int n = 5;
    int temp;
    int arr[n] = {1,2,3,4};
    for(int i=n;i>=n-1;i--){
        temp = arr[i-2];
        arr[i-1] = temp;
        temp = 0;
    }
    arr[2] == 6;
    for(int i=0; i<n ;i++){
        cout << arr[i] << endl;
    }
    return 0;
