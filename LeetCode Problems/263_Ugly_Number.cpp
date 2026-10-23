#include <iostream>
using namespace std;
bool isUgly(int n) {
    if (n <= 0){ 
        return false;
    }
    while (n % 2 == 0){
        n /= 2;   
    }
    while (n % 3 == 0){
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }
    return n == 1;
}

int main() {
    int n1 = 6; 
    int n2 = 1;
    int n3 = 14;
    cout << n1 << " -> " << (isUgly(n1) ? "true" : "false") << endl;
    cout << n2 << " -> " << (isUgly(n2) ? "true" : "false") << endl;
    cout << n3 << " -> " << (isUgly(n3) ? "true" : "false") << endl;
    return 0;
}