#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    string name;
    cout << "Введіть своє імʼя:" << endl;
    cin >> name;

    int working_hour;
    cout << "Введіть кількість відпрацюваних годин:" << endl;
    cin >> working_hour;

    float wage;
    cout << "Введіть погодинну ставку:" << endl;
    cin >> wage;

    float profit = working_hour * wage;
    cout << fixed << setprecision(2); 
    cout << "Працівник(ця) " << name << " отримав(ла) зарплату: " << profit;
    return 0;
}