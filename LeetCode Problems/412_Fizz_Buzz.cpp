#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> answer;
    int n;
    cout << "Enter size of an Array: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0){
            answer.push_back("FizzBuzz");
        } else if (i % 3 == 0){
            answer.push_back("Fizz");
        } else if (i % 5 == 0){
            answer.push_back("Buzz");
        } else {
            answer.push_back(to_string(i));
        }
    }
    // Here, answer.push_back() is used for pushing string in a vector 

    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}