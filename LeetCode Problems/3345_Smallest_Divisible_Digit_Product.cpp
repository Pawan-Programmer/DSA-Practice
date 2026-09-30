#include <iostream>
using namespace std;
int smallestNumber(int n, int t) {
    while (true) {
        int product = 1;
        int temp = n;
        while (temp > 0) {
            int rem = temp % 10;
            product *= rem;
            temp /= 10;
        }
        if (product % t == 0) {
            return n;
        }
        n++;
    }
}
int main() {
    int n, t;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter t: ";
    cin >> t;
    int result = smallestNumber(n, t);
    cout << "The smallest number is: " << result << endl;
    return 0;
}