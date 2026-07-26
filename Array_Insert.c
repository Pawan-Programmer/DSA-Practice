#include <stdio.h>
int main(){
    int n = 5 , temp ,Insert_Element,Index;
    int Arr[5] = {1, 2, 3, 4};
    for(int i = n; i > n-2; i--){
        temp = Arr[i-2];
        Arr[i-1] = temp;
        
    }
    printf("Enter the element to be inserted: \n");
    scanf("%d", &Insert_Element);
    printf("Enter the index where the element is to be inserted between 0 and %d: \n", n-1);
    scanf("%d", &Index);
    Arr[Index] = Insert_Element;
    for(int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }
    return 0;
}