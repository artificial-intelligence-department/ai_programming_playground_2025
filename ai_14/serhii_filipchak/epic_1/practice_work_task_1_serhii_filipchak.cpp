#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string name;
    int hours;
    double rate;

    cout << "Введіть ім'я працівника" << endl;
    getline(cin, name);

    cout << "Введіть кількість годин" << endl;
    cin >> hours;
    while (hours <= 0) {
        cout << "Помилка! Введіть додатнє число" << endl;
        cin >> hours;
    }

    cout << "Введіть ставку" << endl;
    cin >> rate;
    while (rate <= 0) {
        cout << "Помилка! Введіть додатнє число" << endl;
        cin >> rate;
    }

    double salary = hours * rate;

    cout << fixed << setprecision(2);
    cout << "Працівник " << name << " заробив " << salary << " грн." << endl;
    return 0;
}