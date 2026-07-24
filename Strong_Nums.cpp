#include <iostream>
using namespace std;
int main(){
    int num, rem, sum=0 , original;
    cout << "Enter a number: " << endl;
    cin >> num;
    original = num ;
    while(num!=0){
        rem = num % 10;
        int fact = 1;
        for(int i=1;i<=rem;i++){
            fact = fact*i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(original == sum){
        cout << "Given Number " << sum << " is a Strong number" << endl; 
    }
    return 0;
}
