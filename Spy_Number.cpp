#include <iostream>
using namespace std;
int main(){
    int num , rem ,sum=0, prdt=1;
    cout << "Enter a number: " << endl;
    cin >> num;
    while(num!=0){
        rem = num % 10;
        sum = sum + rem;
        prdt = prdt*rem;
        num = num / 10;
    }
    if(sum == prdt){
        cout << "Given number is a spy number" << endl;
    }else{
        cout << "Given number is not a spy number" << endl;
    }
    return 0;
}