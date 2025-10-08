#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "uk_UA.UTF-8");

    string name;
    int hours;
    double hourly_rate;
    cin >> name >> hours >> hourly_rate;

    cout << "Працівник " <<  name << " отримав зарплату: " << fixed << setprecision(2) << (hours*hourly_rate) << " грн";
    return 0;
}