#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    int V0, t;
    double p;

    cin >> V0 >> p >> t;

    double V = V0 * pow(1.0 + (p / 100.0), t);

    cout << "Зростання: " << fixed << setprecision(2) << V << endl;
    cout << "Прогноз переглядів через " << t << " днів: " << int(round(V)) << endl;

    return 0;
}