#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    char ans = 0;
    // String s ke har character ke sath XOR karo
    for (char c : s) {
        ans ^= c;
    }
    // String t ke har character ke sath bhi XOR karo
    for (char c : t) {
        ans ^= c;
    }
    // Jo extra character cancel out nahi hua, woh return ho jayega
    return ans;
}

int main() {
    string s = "abcd";
    string t = "abcde";
    char result = findTheDifference(s, t);
    cout << "The extra added character is: " << result << endl;
    return 0;
}