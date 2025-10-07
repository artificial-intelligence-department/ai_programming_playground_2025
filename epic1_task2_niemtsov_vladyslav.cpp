#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double V0, p;  // Початкова кількість переглядів і відсоток росту
    int t;         // Кількість днів

    cout << "Введіть початкову кількість переглядів (V0): ";
    cin >> V0;

    cout << "Введіть середній відсоток зростання переглядів за день (p): ";
    cin >> p;

    cout << "Введіть кількість днів для прогнозу (t): ";
    cin >> t;

    // Обчислення 
    double Vt = V0 * pow((1 + p / 100), t);

    cout << fixed << setprecision(2);
    cout << "Зростання (float):  " << Vt << endl;
    cout << "Прогноз переглядів через " << t << " днів: " << round(Vt) << endl;

    return 0;
}
