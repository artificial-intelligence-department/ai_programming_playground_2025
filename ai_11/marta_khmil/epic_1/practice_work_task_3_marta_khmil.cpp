#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double V0;
    double p;
    int t;
    double Vt;
    cout << "Enter initial views, daily growth percentage and number of days: ";
    cin >> V0 >> p >> t;
    Vt = V0 * pow((1 + p / 100), t);
    cout << fixed << setprecision(2);
    cout << "Growth (float): " << Vt << endl;
    cout << "Forecast of views after ~" << t << " days: " << static_cast<int>(Vt + 0.5) << endl;
    return 0;
}
