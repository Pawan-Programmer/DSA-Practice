#include <iostream>
using namespace std;

void ReverseNumber(int n){
    int rem ;
    if(n==0){
        return ;
    }
    rem = n % 10 ;
    cout << rem ;
    ReverseNumber(n/10) ;
}
int main(){
    int n;
    cout << "Enter a number :" ;
    cin >> n ;
    ReverseNumber(n);
    return 0;
}