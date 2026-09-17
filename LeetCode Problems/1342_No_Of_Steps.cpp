#include <iostream>
using namespace std;
int numberOfSteps(int num){
    int count = 0;
    while (num > 0){
        if (num % 2 == 0){
            num = num / 2;
            count++ ;
        }
        else if (num % 2 != 0){
            num -= 1;
            count++ ;
        }
    }
    cout << count ;
    return 0;
}

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    numberOfSteps(num);
    return 0;
}