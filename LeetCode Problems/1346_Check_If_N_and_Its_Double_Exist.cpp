#include <iostream>
#include <vector>
using namespace std;
bool checkIfExist(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(i != j && arr[i] == 2 * arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {10, 2, 5, 3};
    cout << "Array elements: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    if(checkIfExist(arr)) {
        cout << "Result: True (Found a number and its double)" << endl;
    } else {
        cout << "Result: False (No such pair found)" << endl;
    }
    
    return 0;
}