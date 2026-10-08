#include <iostream>
using namespace std;
bool isThree(int n) {
    int i = 1;
    int count = 0;
    while(i <= n){
        if(n % i == 0){
            count = count + 1;
        }
        i++;
    }
    if(count == 3){
        return true;
    }
    return false;
}

int main() {
    int n = 4;
    if (isThree(n)) {
        cout << n << " has exactly three divisors." << endl;
    } else {
        cout << n << " does not have exactly three divisors." << endl;
    }
    return 0;
}