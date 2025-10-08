#include <iostream>
#include <cmath> // for pow()
using namespace std;

int main() {
    double P, r, t; // initial amount, annual rate, time
    int n; // number of times interest is compounded per year

    cout << "Enter the initial amount (P): ";
    cin >> P;
    cout << "Enter the annual interest rate (r in %): ";
    cin >> r;
    cout << "Enter the number of compounding periods per year (n): ";
    cin >> n;
    cout << "Enter the number of years (t): ";
    cin >> t;

    double A = P * pow(1 + (r / (100 * n)), n * t);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Future investment value (A): " << A << " UAH" << endl;

    return 0;
}