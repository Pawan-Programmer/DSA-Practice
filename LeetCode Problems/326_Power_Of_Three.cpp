#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 3 == 0) {
        n = n / 3;
    }
    return n == 1;
}

int main() {
    cout << boolalpha;
    cout << "27: " << isPowerOfThree(27) << endl;
    cout << "0:  " << isPowerOfThree(0)  << endl; 
    cout << "9:  " << isPowerOfThree(9)  << endl;
    cout << "45: " << isPowerOfThree(45) << endl; 

    return 0;
}