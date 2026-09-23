#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int sz = digits.size();
    for (int i = sz - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;  
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {1, 2, 9};
    vector<int> result = plusOne(digits);
    cout << "Result: ";
    for (int d : result) {
        cout << d << " ";
    }
    return 0;
}