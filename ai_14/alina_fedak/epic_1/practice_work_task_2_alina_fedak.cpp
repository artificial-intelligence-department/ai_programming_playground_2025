#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double V0, p;
    int t;

    cin >> V0 >> p >> t;

    double growth = V0 * pow(1 + p / 100.0, t);

    int rounded = static_cast<int>(round(growth));

    cout << fixed << setprecision(2);
    cout << "Growth (float): " << growth << endl;
    cout << "Predicted views after " << t << " t: " << rounded << endl;

    return 0;
}