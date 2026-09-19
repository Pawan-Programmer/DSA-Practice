#include <iostream>
using namespace std;

int main(){
    int num, count = 0, rem;
    cout << "Enter a integer number: " << endl;
    cin >> num ;
    int original = num ;
    while (num > 0){
        rem = num % 10;
        if(rem == 0 || original % rem == 0){
            count += 1 ;
        }
        num = num / 10;
    }
    cout << count ;
}