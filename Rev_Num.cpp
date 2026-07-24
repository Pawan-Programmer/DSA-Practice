#include <iostream>
using namespace std;
int main(){
    int num , rev =0 , rem, original;
    cout << "Enter a number : " << endl;
    cin >> num;
    original = num;
    while (num>0){
        rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
    }
    cout << "Reverse of the number is:" << rev << endl;
    if(original == rev){
        cout << "Given number is a Palindrome" << endl;
    }
    return 0;
}