#include <iostream>
using namespace std;
int main(){
    int low , high ;
    int count = 0;
    cout << "Enter lowest value: " << endl;
    cin >> low;
    cout << "Enter greatest value: " << endl;
    cin >> high ;
    while(low<=high){
        if(low%2==1){
            count += 1;
        }
        low = low + 1;
    }
    cout << count ;
    return 0;
}