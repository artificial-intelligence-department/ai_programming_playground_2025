#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V0, p;
    int t;

    cout << "Enter initial number of views (V0): ";
    cin >> V0;
    cout << "Enter daily growth rate (p in %): ";
    cin >> p;
    cout << "Enter number of days (t): ";
    cin >> t;

    double Vt = V0 * pow(1 + p / 100, t);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Predicted number of views after " << t << " days: " << Vt << endl;

    return 0;
}