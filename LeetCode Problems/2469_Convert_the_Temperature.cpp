#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<double> convertTemperature(double celsius) {
    double Kelvin, Fahrenheit;
    vector<double> ans = {};
    Kelvin = celsius + 273.15;
    Fahrenheit = (celsius * 1.80) + 32.00;
    ans.push_back(Kelvin);
    ans.push_back(Fahrenheit);
    return ans;
}

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    vector<double> result = convertTemperature(celsius);

    cout << fixed << setprecision(5);
    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;

    return 0;
}