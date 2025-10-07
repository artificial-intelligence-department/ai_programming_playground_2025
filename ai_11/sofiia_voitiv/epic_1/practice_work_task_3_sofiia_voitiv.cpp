#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

     int v0, t;
     float p;

     cout << "Введіть початкову кількість переглядів відео, відсоток зростання(0-100%) та кількість днів через пробіл:";
     cin >> v0 >> p >> t;

     float growth = v0 * pow((1 + p/100), t);
     cout << "Зростання: " << fixed << setprecision(2) << growth << endl << "Прогноз переглядів через " << t << " днів: " << fixed << setprecision(0) << growth;

    return 0;
}