#include <iostream>
#include <iomanip>

using namespace std;
int main() {
     string name;
     int hours;
     double hourly_rate;
     double salary;

    cout << "Введіть ім'я працівника: ";
    cin >> name;

    cout << "Введіть кількість відпрацьованих годин: ";
    cin >> hours;

    cout << "Введіть погодинну ставку: ";
    cin >> hourly_rate;

    salary = hours * hourly_rate;
    cout << setprecision(2) << fixed;
    cout << "Працівник " << name << " отримав зарплату: " << salary << " грн" << endl;

    return 0;
    
}