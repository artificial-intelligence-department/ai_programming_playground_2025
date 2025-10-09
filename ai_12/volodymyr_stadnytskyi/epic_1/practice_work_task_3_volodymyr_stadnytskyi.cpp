#include <iostream>
using namespace std;

#include <iomanip>
#include <cmath>

int main(){

    double V0, p;
    int t;

    cin >> V0 >> p >> t;

    double growth = V0 * pow(1 + p / 100, t);

    cout << fixed << setprecision(2) << "Зростання: " << growth << endl;

    int prediction = round(growth);
    cout << "Прогноз переглядів через " << t << " днів: " << prediction << endl;

    return 0;
}