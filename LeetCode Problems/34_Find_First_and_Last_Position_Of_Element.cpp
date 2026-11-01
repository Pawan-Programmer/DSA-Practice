#include <iostream>
#include <vector>
using namespace std;
int findFirst(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int first = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1; 
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first;
}

int findLast(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int last = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1; 
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return last;
}
vector<int> searchRange(vector<int>& nums, int target) {
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    
    return {first, last};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    
    vector<int> result = searchRange(nums, target);
    
    cout << "First and Last Position: [" << result[0] << ", " << result[1] << "]" << endl;
    
    return 0;
}