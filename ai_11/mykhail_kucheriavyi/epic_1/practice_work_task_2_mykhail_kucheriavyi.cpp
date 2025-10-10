#include <iostream>
#include <windows.h>
#include <cstdio>
using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int time;
    double hourly_rate;
    string name;
    cout << "Введи ім'я працівника:\n";
    cin >> name;
    cout << "Введи кількість відпрацьованих годин:\n";
    cin >> time;
    cout << "Введи погодинну ставку:\n";
    cin >> hourly_rate;

    cout << "Працівник " << name << " отримав зарплату: ";
    printf("%.2f", time*hourly_rate);
    cout << " грн" << endl;
    return 0;

}