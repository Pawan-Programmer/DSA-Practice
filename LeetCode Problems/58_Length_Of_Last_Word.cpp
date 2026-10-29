#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.length() - 1;
    int length = 0;
    // 1. Peeche ke extra spaces skip karo
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    // 2. Last word ke characters count karo
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int result = lengthOfLastWord(s);
    cout << "Length of last word: " << result << endl;
    return 0;
}