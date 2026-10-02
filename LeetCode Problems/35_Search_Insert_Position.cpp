#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] > target){
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else if(target >= nums[mid] + 1){
            mid = mid + 1;
        }
        else{
            return mid;
        }
    }
    return low;   
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    cout << "Array elements: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target << endl;
    int result = searchInsert(nums, target);
    cout << "The insert position is: " << result << endl; 
    return 0;
}