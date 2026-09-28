#include <iostream>
using namespace std;
bool isPowerOfFour(long long n) {
    if(n <= 0){
        return false;
    }
    while(n % 4 == 0){
        n = n / 4;
    }
    return n == 1;
}
int main() {
    std::cout << "Is 16 a power of four? " << (isPowerOfFour(16) ? "True" : "False") << std::endl;
    std::cout << "Is 64 a power of four? " << (isPowerOfFour(64) ? "True" : "False") << std::endl;
    std::cout << "Is 10 a power of four? " << (isPowerOfFour(10) ? "True" : "False") << std::endl;
    std::cout << "Is 1 a power of four?  " << (isPowerOfFour(1) ? "True" : "False") << std::endl;
    std::cout << "Is 0 a power of four?  " << (isPowerOfFour(0) ? "True" : "False") << std::endl;

    return 0;
}