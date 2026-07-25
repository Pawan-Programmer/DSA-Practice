#include <stdio.h>
int main(){
    int n , temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int Arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &Arr[i]);
    }
    int SearchElement , index;
    printf("Enter the element to search and its index: ");
    scanf("%d %d", &SearchElement, &index);
    for(int i=n;i>n-2;i--){
        temp = Arr[i-2];
        Arr[i-1] = temp;
    }
    Arr[index] = SearchElement;
    printf("The new array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }
    return 0;
}