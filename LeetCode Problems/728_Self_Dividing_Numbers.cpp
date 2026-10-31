#include <iostream>
#include <vector>
using namespace std;
bool isSelfDividing(int num) {
    int temp = num;
    
    while (temp > 0) {
        int rem = temp % 10;
        temp = temp / 10;
        
        if (rem == 0 || num % rem != 0) {
            return false;
        }
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;
    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            ans.push_back(i);
        }
    }
    return ans;
}
int main() {
    int left = 1, right = 22;
    vector<int> result = selfDividingNumbers(left, right);
    cout << "Self Dividing Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}