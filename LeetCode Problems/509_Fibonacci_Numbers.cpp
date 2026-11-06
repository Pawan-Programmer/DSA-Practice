#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Base cases
    if (n <= 1) {
        cout << "Fibonacci number is: " << n << endl;
        return 0;
    }

    int prev2 = 0; // F(0)
    int prev1 = 1; // F(1)
    int current = 0;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    cout << "Fibonacci number is: " << current << endl;

    return 0;
}