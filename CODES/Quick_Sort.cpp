#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int>& nums , int high, int low){
    if(low>=high){
        return ;
    }
    int pivot = nums[high];
    while(low<high){

    }


}
int main(){
    vector<int> nums = {9,7,4,1,2,6,8};
    int high = nums.size();
    int low = 0;
    QuickSort(nums , high , low);
    return 0;
}