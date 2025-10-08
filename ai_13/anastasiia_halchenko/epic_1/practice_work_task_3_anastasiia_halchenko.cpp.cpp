#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main () {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a; // views
    float b; // percent
    int c; // days
    int e;
    float d;

    cout << "Введіть кількість переглядів: ";
    cin >> a;

    cout << "Введіть процент зростання: ";
    cin >> b;
    b = b / 100;

    cout << "Введіть кількість днів: ";
    cin >> c;

        d = a * pow(1 + b, c);
        e = d - a;

    cout << "Зростання: " << e << endl;
    cout << "Прогноз переглядів через 10 днів: " << d << endl;

    return 0;

}