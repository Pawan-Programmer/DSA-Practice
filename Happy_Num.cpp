#include <iostream> 
using namespace std;
int main(){
    int num, sum=0 ,rem;
    cout << "Enter a number: " << endl;
    cin >> num;
    while (sum!= 1 && sum!=4){
        sum = 0;
        while(num!=0){
            rem = num % 10;
            sum = sum + (rem*rem);
            num = num / 10;
        }
        if(sum == 1){
            break;
        }
        num = sum;
    }
    if(sum == 1){
        cout << "Given number is a Happy Number" << endl;
    }else{
        cout << "Given number is not a happy number" << endl;
    }
    return 0;
}