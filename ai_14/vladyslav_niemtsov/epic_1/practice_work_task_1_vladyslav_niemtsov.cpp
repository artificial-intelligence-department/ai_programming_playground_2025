#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string name;
    int hours;
    double rate;
    cout << "Введіть ім'я працівника: ";
    cin >> name;
    cout << "Введіть кількість відпрацьованих годин: ";
    cin >> hours;
    cout << "Введіть погодинну ставку: ";
    cin >> rate;
    double salary = hours * rate;
    cout << fixed << setprecision(2);
    cout << "Працівник " << name << " отримав зарплату: " << salary <<  endl;

    return 0;
}
