#include <stdio.h>
int main(){
    int n = 5 , temp;
    int Arr[5] = {1, 2, 3, 4};
    for(int i = n; i > n-2; i--){
        temp = Arr[i-2];
        Arr[i-1] = temp;
        
    }
    Arr[n-3] = 6;
    for(int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }
    return 0;
}