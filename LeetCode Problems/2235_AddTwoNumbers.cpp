#include <iostream>
using namespace std;
int sum(int num1 , int num2){
    int total = num1 + num2;
    cout << total;
    return 0;
}

int main(){
    int num1 , num2 ;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2 ;
    sum(num1 , num2);
}
