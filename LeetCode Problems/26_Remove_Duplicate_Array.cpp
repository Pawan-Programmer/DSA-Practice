#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()){
        return 0;
    }    
    int k = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k; // Returns the count of unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
    int k = removeDuplicates(nums);
    cout << "Unique elements count: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}