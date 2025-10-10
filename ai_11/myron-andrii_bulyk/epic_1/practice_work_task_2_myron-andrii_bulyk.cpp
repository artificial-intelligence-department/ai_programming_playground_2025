#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
    string name;
    int hours;
    double rate;
	cout <<  "Введіть ім'я працівника, кількість відпрацьованих годин та погодинну ставку: ";
    cin >> name >> hours >> rate;


    double salary = hours * rate;

    cout << "Працівник " << name << " отримав зарплату: ";
    cout << fixed << setprecision(2) << salary << " грн" << endl;

    return 0;
}