#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int size = nums.size();
    int result;
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(target == nums[i] + nums[j]){
                return {i, j};
            } 
        }
    }
    return {};
}

int main() {
    // Test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);

    cout << "Indices: ";
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}