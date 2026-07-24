#include <iostream>
using namespace std;
int power(int base,int expo){
    double ans =1;
    // This is Function to find power by calling function without using header file
    for(int i=1;i<=expo;i++){
        ans*=base;
    }
    return ans;
}
int main(){  
    cout << power(2,3) << endl;
    cout << power(3,4) << endl;
    return 0;
}