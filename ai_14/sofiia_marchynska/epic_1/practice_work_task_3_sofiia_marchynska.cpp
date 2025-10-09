#include <iostream>
#include <locale.h>
#include <math.h>
#include <iomanip> 
using namespace std;

int main () {
    setlocale(LC_ALL, "uk_UA.UTF-8"); 
    int V0 = 0, t;
    float p;
    cout << "Введiть початкову кiлькiсть переглядiв" << endl;
    cin >> V0;
     cout << "Введiть на скiльки буде зростати щодня к-сть переглядiв: " << endl;
    cin >> p;
     cout << "Введiть кiлькiсть днiв: " << endl;
    cin >> t;

    float result = V0 * pow((1 + p/100), t);
    cout << "Зростання: " << fixed << setprecision(2) << result << endl;
    cout << "Прогноз переглядiв через " << t << " днiв: " <<fixed << setprecision(0) << round(result) << endl;

    return 0;
};