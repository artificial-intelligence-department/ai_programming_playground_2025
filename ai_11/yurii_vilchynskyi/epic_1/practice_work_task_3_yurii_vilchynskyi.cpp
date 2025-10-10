#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    double V0, p, t, Vt; // Початково переглядів, приріст у відсотках, кількість днів, вивід результату

    cout << "Введіть початкову кількість переглядів: ";
    cin >> V0;

    cout << "Введіть відсоток зростання (15% = 15): ";
    cin >> p;

    cout << "Введіть кількість днів: ";
    cin >> t;

    Vt = V0 * pow(1 + p/100, t);
    cout << fixed << setprecision(2);
    cout << "Зростання (float): " << Vt << "\n"; 
    cout << fixed << setprecision(0); 
    cout << "Прогноз переглядів через " << t << " днів: " << Vt;
    return 0;
}