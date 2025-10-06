#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;

int main () {
    setlocale(LC_ALL, "uk_UA.UTF-8"); 
    SetConsoleCP(CP_UTF8);    
    SetConsoleOutputCP(CP_UTF8);
    string name;
    int hours;
    float rate;
    cout << "Введiть iм’я працiвника: " <<endl;
    cin >> name;
    cout << "Введiть кiлькiсть вiдпрацьованих годин: " <<endl;
    cin >> hours;
    cout << "Введiть погодинну ставку: " <<endl;
    cin >> rate;
    float salary = hours * rate;
    cout << "Працiвник " << name << " отримав зарплату: " << fixed << setprecision(2) << salary << "грн" << endl; 


    return 0;
};