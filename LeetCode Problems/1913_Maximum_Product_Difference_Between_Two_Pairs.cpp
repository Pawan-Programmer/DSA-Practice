#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProductDifference(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    long long difference;
    difference = (static_cast<long long>(nums[n-1]) * nums[n-2]) - (static_cast<long long>(nums[0]) * nums[1]);
    return difference;
}

int main() {

    vector<int> nums = {5, 6, 2, 7, 4};
    
    int result = maxProductDifference(nums);
    
    cout << "Max Product Difference: " << result << "\n";
    
    return 0;
}