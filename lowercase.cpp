#include <iostream>
#include <string>
using namespace std;
string LowerCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}
int main() {
    string s = "PAWAN";
    s = LowerCase(s);
    cout << s << endl;
    return 0;
}