#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += nums[i];
    }
    int maxSum = sum;
    for(int i = k; i < nums.size(); i++){
        sum = sum - nums[i - k] + nums[i];
        maxSum = max(maxSum, sum);
    }
    return (double) maxSum / k;
}

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << "Array elements: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << "\nk = " << k << endl;

    double result = findMaxAverage(nums, k);

    cout << "Maximum Average: " << result << endl;
    return 0;
}