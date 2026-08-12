#include <iostream>
using namespace std;
int main(){
    int Arr[7] = {1,2,4,6,6,8};
    int start = 0;
    int end = 6;
    int target ;
    cout << "Enter target Value : " << endl;
    cin >> target;
    // Lower Bound
    while (start<=end){
        int mid = start + (end - start)/2;
        if(target == Arr[mid]){
            if(target == Arr[mid-1]){
                cout << "Lower Bound is: " << mid -1 << endl;
                break;
            }else{
                cout << "Lower Bound is:" << mid << endl;
                break;
            }
        }
    }
    while(start<=end){
        int mid = start + (end - start)/2;
        if(Arr[mid] == target){
            mid ++ ;
        }else{
            cout << "Upper Bound is:" << mid << endl;
            break;
        }

    }
    return 0;
}