#include <stdio.h>
int main(){
    int n = 5;
    int temp;
    int arr[5] = {1,2,3,4};
    arr[2] == 6;
    for(int i=n;i>=n;i--){
        temp = arr[i-2];
        arr[i-1] = temp;
        temp = 0;
    }
    //array
    for(int i=0; i<n ;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}