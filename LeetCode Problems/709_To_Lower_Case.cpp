#include <iostream>
#include <string>
#include <cctype> // tolower() function ke liye
using namespace std;
string toLowerCase(string s) {
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;    
}

int main() {
    string s = "Hello WORLD!";
    cout << "Original string: " << s << endl;
    string result = toLowerCase(s);
    cout << "Lowercase string: " << result << endl;
    return 0;
}