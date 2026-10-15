#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) { // (n & 1) rightmost bit 1 hai ya nahi check karta hai
            count++;
        }
        n = n >> 1; // Number ko right shift karo
    }
    return count;
}

int main() {
    int n = 11;
    
    cout << "Input number: " << n << endl;
    cout << "Hamming Weight (Number of 1 bits): " << hammingWeight(n) << endl;

    return 0;
}