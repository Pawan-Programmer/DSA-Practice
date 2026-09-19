#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int value = 0 ;
    int rem ;
    cout << "Enter number of elements: " ;
    cin >> n ;
    vector<int> nums(n);
    cout << "Enter value  " << endl;
    for(int i=0;i<n;i++){
        cin >> nums[i] ;
    }
    
    for(int i=0;i<nums.size();i++){
        int count = 0;
        int temp = nums[i] ;
        while (temp>0){
            rem = temp % 10;
            count += 1;
            temp = temp / 10;
        }
        if(count % 2 == 0){
            value += 1;
        }
    }

    cout << "Even number of Digits is: " << value ;
    return 0;
}