#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a positive number: " << endl;
    cin >> n ;
    if (n % 2 == 0){
        cout << n ;
    }else{
        n = n * 2;
        cout << n ;
    }
    return 0;
}