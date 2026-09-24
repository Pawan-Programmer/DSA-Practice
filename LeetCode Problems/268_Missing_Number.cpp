#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int actual_sum = 0;
    int expected_sum;
    expected_sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++) {
        actual_sum = actual_sum + nums[i];
    }
    int result = expected_sum - actual_sum;
    return result;
}

int main() {
    vector<int> nums = {3, 0, 1};
    int missing = missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    return 0;
}