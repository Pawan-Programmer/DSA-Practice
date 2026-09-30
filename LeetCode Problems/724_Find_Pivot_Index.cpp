#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int total_sum = 0;
    for(int i = 0; i < nums.size(); i++){
        total_sum += nums[i];
    }
    int left_sum = 0;
    for(int i = 0; i < nums.size(); i++){
        int right_sum = total_sum - left_sum - nums[i];
        if(left_sum == right_sum){
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}

int main() {
    // Test case
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    cout << "The pivot index is: " << result << endl;
    
    return 0;
}