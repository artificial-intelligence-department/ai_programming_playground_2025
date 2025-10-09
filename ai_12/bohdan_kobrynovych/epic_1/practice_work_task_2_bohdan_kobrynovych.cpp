#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V0, p; 
    int t;

    cout << "Enter (V0), (p),(t): ";
    cin >> V0 >> p >> t;

    double result = V0 * pow((1 + p / 100), t);

    cout << "Growth (float): " << result << endl;
    cout << "Predicted views after " << t << " days: " << round(result) << endl;

    return 0;
}
