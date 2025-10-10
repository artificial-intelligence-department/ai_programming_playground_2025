#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name;
    int hours;
    float rate;
    cout << "Введіть ім'я працівника, кількість відпрацьованих годин, погодинну ставку: " << endl;
    cin >> name >> hours >> rate;
    float salary = hours * rate;
    cout << "Працівник " << name << " отримав зарплату: " << salary;
    return 0;
}