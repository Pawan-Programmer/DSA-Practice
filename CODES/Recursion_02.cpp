#include <iostream>
using namespace std;

void fact(int n){
    int value ;
    if(n==0){
        return ;
    }
    else{
        value = n * fact(n-1);
    }
    return value;
}

int main(){
    int n;
    cout << "Enter size : " ;
    cin >> n;
    fact(n);
    return 0;
}