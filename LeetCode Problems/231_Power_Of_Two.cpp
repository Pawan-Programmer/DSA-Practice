#include <iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    // Test cases
    cout << boolalpha; // Prints true/false instead of 1/0
    cout << "16: " << isPowerOfTwo(16) << endl;
    cout << "3:  " << isPowerOfTwo(3)  << endl; 
    cout << "1:  " << isPowerOfTwo(1)  << endl;
    cout << "0:  " << isPowerOfTwo(0)  << endl; 

    return 0;
}