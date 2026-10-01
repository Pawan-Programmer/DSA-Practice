#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
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
        else{
            return mid;
        }
    }
    return -1;
}

int main() {
    // Test vector
    vector<int> nums = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    cout << "Array elements: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Searching for target: " << target << endl;
    
    int result = search(nums, target);
    
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}