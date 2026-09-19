#include <iostream>
using namespace std;

int main(){
    int num , rem;
    cout << "Enter an integer number: " << endl;
    cin >> num ;
    int sum = num;
    while (num >= 10){
        sum = 0;
        while(num > 0){
            rem = num% 10;
            sum = sum+ rem ;
            num =num / 10;
        }
        num = sum;
    }
    cout << sum ;
    return 0;
}