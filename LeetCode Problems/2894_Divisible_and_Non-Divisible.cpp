#include <iostream>
using namespace std;

int differenceOfSums(int n, int m) {
    int num1 = 0;
    int num2 = 0;
    for(int i = 1; i <= n; i++){
        if(i % m != 0){
            num1 = num1 + i;
        }
        else{
            num2 = num2 + i;
        }
    }
    return num1 - num2;    
}

int main() {
    int n = 10;
    int m = 3;
    
    int result = differenceOfSums(n, m);
    
    cout << "Difference of Sums: " << result << "\n";

    return 0;
}