#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "uk_UA.UTF-8");

    double V0, p, t;
    cin >> V0 >> p >> t;

    double Vt = V0*pow((1+p/100), t);
    cout << "Зростання (float): " << fixed << setprecision(2) << Vt-V0 << endl;
    cout << "Прогноз переглядів через 10 днів: " << fixed << setprecision(0) << Vt;

    return 0;
}