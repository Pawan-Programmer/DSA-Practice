#include <iostream>
using namespace std;
int sumOfTheDigitsOfHarshadNumber(int x) {
    int original = x;
    int sum = 0;
    while(x > 0){
        int rem = x % 10;
        sum = sum + rem;
        x = x / 10;
    }
    if(original % sum == 0){
        return sum; 
    }
    return -1;
}
int main() {
    int x = 18;
    int result = sumOfTheDigitsOfHarshadNumber(x);
    if (result != -1) {
        cout << x << " is a Harshad number. Sum of digits = " << result << endl;
    } else {
        cout << x << " is not a Harshad number." << endl;
    }
    return 0;
}