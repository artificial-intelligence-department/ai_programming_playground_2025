#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t, a;
    int n;

    cout << "Enter the initial amount (P): ";
    cin >> p;

    cout << "Enter the annual interest rate (%): ";
    cin >> r;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> n;

    cout << "Enter the number of years: ";
    cin >> t;

    a = p * pow(1 + r / n, n * t);

    cout << "Final amount (A): " << a << endl;

    return 0;
}