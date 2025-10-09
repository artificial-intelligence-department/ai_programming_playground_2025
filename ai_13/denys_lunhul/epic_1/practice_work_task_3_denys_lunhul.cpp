#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string name;
    cout << "Введіть ім'я: ";
    cin >> name;
    int hours;
    cout << "Введіть кількість відпрацьованих годин: ";
    cin >> hours;
    float earn_per_hour;
    cout << "Введіть погодинну ставку: ";
    cin >> earn_per_hour;
    float salary = earn_per_hour * hours;
    salary = round(salary * 100) / 100;
    std::cout << "Працівник " << name << " отримав зарплату " << salary << " грн";
    return 0;
}