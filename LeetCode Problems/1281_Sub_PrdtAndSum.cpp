#include <iostream>
using namespace std;

int main(){
    int rem, difference ,n;
    int sum = 0, product = 1;
    cout << "Enter the number: " << endl;
    cin >> n ;
    while(n > 0)
    {
        rem = n % 10;
        sum += rem;
        product *= rem;
        n = n / 10;
    }
    difference = product - sum;
    cout << difference ;
    return 0;
}