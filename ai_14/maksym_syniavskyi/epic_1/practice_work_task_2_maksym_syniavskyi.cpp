#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double V0, p;
    int t;
    cin >> V0 >> p >> t;

    double growth = V0 * pow(1 + p / 100.0, t);
    int forecast = static_cast<int>(growth + 0.5); // округлення до найближчого цілого

    cout << fixed << setprecision(2);
    cout << "Зростання (float): " << growth << endl;
    cout << "Прогноз переглядів через " << t << " днів: " << forecast << endl;

    return 0;
}