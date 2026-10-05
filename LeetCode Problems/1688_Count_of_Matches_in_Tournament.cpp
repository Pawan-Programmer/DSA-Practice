#include <iostream>
using namespace std;
int numberOfMatches(int n) {
    int teams = n;
    int matches; 
    int sum = 0;
    while(teams > 1){
        if(teams % 2 == 0){
            matches = teams / 2;
            teams = teams / 2;
        }
        else{
            matches = (teams - 1) / 2;
            teams = ((teams - 1) / 2) + 1;
        }
        sum = sum + matches;
    }
    return sum;
}
int main() {
    int n = 7;
    cout << "Number of teams: " << n << endl;
    int result = numberOfMatches(n);
    cout << "Total matches played: " << result << endl;
    return 0;
}