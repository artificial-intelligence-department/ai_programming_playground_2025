#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    int views;
    int rate;
    int days;

    cout << "Введть кількість початкових переглядів" << endl;
    cin >> views;
    while (views <= 0) {
        cout << "Помилка! Введіть додатнє число" << endl;
        cin >> views;
    }

    cout << "Введть щоденний зріст переглядів у відсотках" << endl;
    cin >> rate;
    while (rate <= 0) {
        cout << "Помилка! Введіть додатнє число" << endl;
        cin >> rate;
    }

    cout << "Введть кількість днів" << endl;
    cin >> days;
    while (days <= 0) {
        cout << "Помилка! Введіть додатнє число" << endl;
        cin >> days;
    }
    
    double views2 = views * pow(1 + rate / 100.0, days);

    cout << fixed << setprecision(2);
    cout << "Прогноз переглядів через " << days << " днів — " << views2 << endl;

    return 0;
}