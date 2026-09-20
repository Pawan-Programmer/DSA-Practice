#include <iostream>
using namespace std;
bool isHappy(int n) {
    int sum;
    int rem;
    while(n > 6){
        sum = 0;
        while(n > 0){
            rem = n % 10;
            sum = sum + rem * rem;
            n = n / 10;
        }
        n = sum;
        if(sum == 1 || sum == 7){
            return true;
        }
    }
    if(n == 1){
        return true;
    }
    return false;
}

int main() {
    // Test Cases
    cout << boolalpha; //Print true/false instead of 1/0
    cout << "19: " << isHappy(19) << endl;
    cout << "2:  " << isHappy(2)  << endl; 
    cout << "7:  " << isHappy(7)  << endl;
    return 0;
}