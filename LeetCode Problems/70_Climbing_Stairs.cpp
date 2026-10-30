#include <iostream>
using namespace std;
int climbStairs(int n) {
    if (n <= 2) return n;
    
    int prev2 = 1;
    int prev1 = 2;
    int curr = 0;

    for (int i = 3; i <= n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;
}

int main() {
    int n;
    cout << "Enter number of stairs (n): ";
    cin >> n;
    
    cout << "Total ways to climb: " << climbStairs(n) << endl;
    
    return 0;
}