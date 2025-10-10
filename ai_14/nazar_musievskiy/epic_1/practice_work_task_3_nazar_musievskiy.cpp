#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int t;
    double v1, p;
    cout << "1st day views: ";
    cin >> v1;
    cout << "avg raise: ";
    cin >> p;
    cout << "time(days): ";
    cin >> t;
    cout << fixed << setprecision(2);
    cout << "growth: " << v1 * (pow(1 + p/100, t)) << endl;
    cout << fixed << setprecision(0);
    cout << "forecasted views: " << v1 * (pow(1 + p/100, t));
}