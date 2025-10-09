#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int hours;
    double stavka;
    cout << "Введіть ім'я працівника, кількість відпрацьованих годин та погодинну ставку: ";
    cin >> name>> hours>> stavka;
    cout << fixed << setprecision(2);
    cout << "Працівник " << name << " отримав таку зарплату: " << hours * stavka << endl;
    return 0;
}