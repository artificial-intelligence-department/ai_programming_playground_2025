#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double v0, p, t;
    double growth;
    double forecast;

    cout << "Початкова кількість переглядів, відсоток, кількість днів (через пробіл): ";
    cin >> v0 >> p >> t;

    growth = v0 * pow(1 + p/100, t);

    cout << "Зростання (float):\n" << growth << endl;
    cout << "Прогноз переглядів через " << t << " днів: " << round(growth);

    return 0;
}