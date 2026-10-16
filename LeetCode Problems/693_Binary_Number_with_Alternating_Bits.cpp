#include <iostream>
using namespace std;
bool hasAlternatingBits(int n) {
    int lastBit = n & 1;
    n = n >> 1;
    while (n > 0) {
        int currentBit = n & 1;
        if (currentBit == lastBit) {
            return false;
        }
        
        lastBit = currentBit;
        n = n >> 1;
    }
    
    return true;
}

int main() {
    int n1 = 5; 
    int n2 = 7; 
    int n3 = 11;

    cout << n1 << " -> " << (hasAlternatingBits(n1) ? "true" : "false") << endl;
    cout << n2 << " -> " << (hasAlternatingBits(n2) ? "true" : "false") << endl;
    cout << n3 << " -> " << (hasAlternatingBits(n3) ? "true" : "false") << endl;

    return 0;
}