#include <iostream>
using namespace std;
int searchIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5;     
    int target = 30;
    int index = searchIndex(arr, n, target);
    if (index != -1) {
        cout << "Element " << target << " found at index: " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}