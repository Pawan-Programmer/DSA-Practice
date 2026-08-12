#include <iostream>
using namespace std;
int BinarySearch(int n,int Arr[],int target){
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(Arr[mid] == target){
            cout << "Given Element is found successfully" <<  Arr[mid] << endl;
        }else if(Arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}
int main(){
    int n , target;
    cout << "Enter size of an Array: " << endl;
    cin >> n;
    int Arr[n];
    cout << "Enter Element of an Array: " << endl;
    for(int i=0;i<n;i++){
        cin >> Arr[i];
    } 
    cout << "Enter element you want to search" << endl;
    cin >> target;
    BinarySearch(n,Arr,target);
    return 0;

}