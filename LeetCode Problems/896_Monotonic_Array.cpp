#include <iostream>
#include <vector>
using namespace std;
bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            increasing = false;
        }
        if (nums[i] < nums[i + 1]) {
            decreasing = false; 
        }
    }
    return increasing || decreasing;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {6, 5, 4, 4};
    vector<int> nums3 = {1, 3, 2};

    cout << "nums1 is monotonic: " << (isMonotonic(nums1) ? "true" : "false") << endl;
    cout << "nums2 is monotonic: " << (isMonotonic(nums2) ? "true" : "false") << endl;
    cout << "nums3 is monotonic: " << (isMonotonic(nums3) ? "true" : "false") << endl;
    return 0;
}