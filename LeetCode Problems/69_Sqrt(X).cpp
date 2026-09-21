#include <iostream>
int mySqrt(int x) {
    if(x == 0) {
        return 0;
    }
    int left = 1, right = x;
    int ans = 0;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;
        if(square == x) {
            return mid;
        } else if(square < x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x = 8; 
    int result = mySqrt(x);
    std::cout << "The square root of " << x << " is: " << result << std::endl;
    return 0;
}