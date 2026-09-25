#include <iostream>
using namespace std;
bool isPerfectSquare(int num) {
    int odd = 1;
    while (num > 0) {
        num -= odd;
        odd += 2;
    }
    return num == 0;
}

int main() {
    int test1 = 16;
    int test2 = 14;
    int test3 = 25;
    std::cout << test1 << " is a perfect square: " << (isPerfectSquare(test1) ? "True" : "False") << std::endl;
    std::cout << test2 << " is a perfect square: " << (isPerfectSquare(test2) ? "True" : "False") << std::endl;
    std::cout << test3 << " is a perfect square: " << (isPerfectSquare(test3) ? "True" : "False") << std::endl;
    return 0;
}