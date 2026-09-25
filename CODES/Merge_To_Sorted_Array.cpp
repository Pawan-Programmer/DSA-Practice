#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int Mergesorting(vector<int>&arr , vector<int>&arr1 , vector<int>&Array){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=arr1[i]){
            Array.push_back(arr[i]);
            Array.push_back(arr1[i]);
        }
        if(arr[i]>arr1[i]){
            Array.push_back(arr1[i]);
            Array.push_back(arr[i]);
        }
    }
    sort(Array.begin(),Array.end()); //Sort the New Array
    for(int i=0;i<Array.size();i++){
        cout << Array[i] << " ";
    }
    return 0;
}

int main(){
    vector <int> arr={3,4,6};
    vector <int> arr1={4,5,2};
    vector <int> Array = {};
    Mergesorting(arr,arr1,Array);
    return 0;
}