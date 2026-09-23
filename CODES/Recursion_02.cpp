#include <iostream>
using namespace std;


int SumDigit(int n){
    int digit ;
    if(n == 0){
        return 0;
    }
    digit = n % 10;
    return SumDigit(n/10) + digit;
}

int main(){
    int n ;
    cout << "Enter a Number: ";
    cin >> n ;
    cout << SumDigit(n);
}