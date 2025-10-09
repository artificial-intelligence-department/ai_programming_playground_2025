#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string name;
    int hours;
    double wage, salary;

    cout << "Введіть ім'я працівника: ";
    cin >> name;
    cout << "Введіть відпрацьовані години: ";
    cin >> hours;
    cout << "Введіть погодинну ставку: ";
    cin >> wage;

    salary = hours * wage;

    cout << "Працівник " << name << " отримав зарплату " << salary << " грн";

    return 0;

}