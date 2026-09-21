#include <iostream>
#include <vector>
int singleNumber(std::vector<int>& nums) {
    int number = 0, n = nums.size();
    for(int i = 0; i < n; i++) {
        number = number ^ nums[i];
    }
    return number;
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumber(nums);
    std::cout << "The single number is: " << result << std::endl;
    return 0;
}