#include <iostream>
#include <vector>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result = {};
    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                nums2[j] = -1; //It removes the duplicate numbers present in nums2;
                break;
            }
        }
    }
    return result;   
}
int main() {
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    
    vector<int> result = intersect(nums1, nums2);
    
    cout << "Intersection result: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}