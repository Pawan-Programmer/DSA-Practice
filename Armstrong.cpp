#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num , rem , ans=0, original ,n;
    cout << "How many digits you want to check for Armstrong: " << endl;
    cin >> n;
    cout << "Enter a number" << endl;
    cin >> num;
    original = num;
    while(num!=0){
        rem = num % 10;
        ans = ans + pow(rem,n);
        num = num / 10;
    }
    cout << "Code Run successfully " << endl;
    if(original == ans){
        cout << "Given Number " << original << " is an Armstrong number" << endl; 
    }else{
        cout << "Given Number is not an Armstrong" << endl;
    }
    return 0;
}