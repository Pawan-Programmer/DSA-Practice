#include <iostream>
#include <vector>
#include <string>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int X = 0;
    for(int i = 0; i < operations.size(); i++){
        if(operations[i] == "++X" || operations[i] == "X++"){
            X += 1;
        }
        else{
            X -= 1;
        }
    }
    return X;
}

int main() {
    vector<string> operations = {"--X", "X++", "X++"};
    
    int result = finalValueAfterOperations(operations);
    
    cout << "Final Value After Operations: " << result << "\n";
    
    return 0;
}