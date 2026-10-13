#include <iostream>
using namespace std;

bool divisorGame(int n) {
    if(n % 2 == 0) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    if(divisorGame(n)) {
        cout << "Result: True (Alice wins!)" << endl;
    } else {
        cout << "Result: False (Alice loses!)" << endl;
    }

    return 0;
}