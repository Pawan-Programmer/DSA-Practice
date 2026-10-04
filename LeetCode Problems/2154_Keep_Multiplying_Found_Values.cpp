#include <iostream>
#include <vector>
using namespace std;
int findFinalValue(vector<int>& nums, int original) {
    bool found = true;
    while (found) {
        found = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == original) {
                original *= 2;
                found = true;
                break; 
            }
        }
    }
    return original;
}

int main() {
    vector<int> nums = {5, 3, 6, 1, 12, 24};
    int original = 3;
    cout << "Array elements: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Initial original: " << original << endl;
    int result = findFinalValue(nums, original);
    cout << "Final value of original: " << result << endl;
    return 0;
}