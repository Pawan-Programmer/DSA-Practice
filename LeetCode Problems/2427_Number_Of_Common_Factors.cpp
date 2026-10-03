#include <iostream>
#include <algorithm> // Required for std::min
using namespace std;
int commonFactors(int a, int b) {
    int count = 0;
    int limit = min(a, b);
    for(int i = 1; i <= limit; i++){
        if(a % i == 0 && b % i == 0){
            count = count + 1;
        }
    }
    return count; 
}

int main() {
    int a = 12, b = 6;
    cout << "Number a: " << a << endl;
    cout << "Number b: " << b << endl;
    int result = commonFactors(a, b);
    cout << "Number of common factors: " << result << endl;
    return 0;
}