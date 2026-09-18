#include <iostream>
using namespace std;

int Palindrome(int x){
    int rem;
    long long rev = 0;
    int original = x;
    while (x > 0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    long long value = abs(rev);
    if (value == original){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}

int main(){
    int x ;
    cout << "Enter a number: " << endl;
    cin >> x ;
    Palindrome(x);
    return 0;
}