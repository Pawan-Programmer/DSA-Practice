#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    int num, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter number 1: ";
    cin >> num;
    max = min = num;
    while (i < n) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
        i++;
    }
    cout << "\nMaximum number = " << max << endl;
    cout << "Minimum number = " << min << endl;
    return 0;
}