#include <iostream>
#include <cmath>      // для pow()
#include <iomanip>    // для форматування виводу

using namespace std;

int main() {
    double V0, p;  // початкові перегляди і відсоток зростання
    int t;          // кількість днів

    // Ввід даних
    cout << "Введіть V0, p, t: ";
    cin >> V0 >> p >> t;

    // Обчислення
    double growth = V0 * pow(1 + p / 100.0, t);

    // Вивід результату
    cout << fixed << setprecision(2);
    cout << "Зростання (float): " << growth << endl;

    cout << "Прогноз переглядів через " << t << " днів: " 
         << round(growth) << endl;

    return 0;
}
