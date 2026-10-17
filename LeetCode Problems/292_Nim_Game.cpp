#include <iostream>
using namespace std;

bool canWinNim(int n) {
    return n % 4 != 0;
}

int main() {
    int n = 4;
    if (canWinNim(n)) {
        cout << "You can win the Nim game with n = " << n << endl;
    } else {
        cout << "You cannot win the Nim game with n = " << n << endl;
    } 
    return 0;
}