#include <iostream>
using namespace std;
int sumOfMultiples(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n = 7;
    cout << "Sum of multiples up to " << n << " is: " << sumOfMultiples(n) << endl;
    return 0;
}