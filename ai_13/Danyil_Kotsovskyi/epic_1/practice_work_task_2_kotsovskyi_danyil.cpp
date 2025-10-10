#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int hours;
    double salary;

    cout << "Введіть ім'я: ";
    cin >> name;
    cout << "Введіть кількість годин: ";
    cin >> hours;
    cout << "Введіть погодинну ставку: ";
    cin >> salary;

    cout << "Працівник " << name << " отримав зарплату: " << hours*salary;

    return 0;
}