#include <iostream>
#include <vector>
using namespace std;

void Sorting(vector<int>&nums , int i , int pivot , int j){
    int temp ;
    temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void QuickSort(vector<int>& nums , int high, int low){
    int i = 1;
    int j = nums.size()-1;
    if(j<i){
        return ;
    }
    int pivot = nums[low];
    while(nums[i]<pivot && i<high){
        i++;
    }
    while(nums[j]>pivot && j>low){
        j--;
    }
    Sorting(nums , i , pivot , j);
    QuickSort(nums , high , low);
}


int main(){
    vector<int> nums = {9,7,4,1,2,6,8};
    vector<int> result = {};
    int high = nums.size()-1;
    int low = 0;
    int result = QuickSort(nums , high , low);
    cout << result ;
    return 0;
}