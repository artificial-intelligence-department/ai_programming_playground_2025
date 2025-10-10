#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int t;
    float st, salary;

    cout << "Введіть ім’я працівника, кількість годин і ставку: ";
    cin >> name >> t >> st;

    salary = st * t;

    cout << "Працівник " << name << " отримав зарплату: "
         << fixed << setprecision(2) << salary << " грн";

    return 0;
}