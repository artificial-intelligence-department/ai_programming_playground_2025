#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){

    string worker_name;
    cout << "Введіть ім'я працівника: ";
    cin >> worker_name;

    int work_hours;
    cout << "Введіть кількість годин, які відпрацював " << worker_name << " : ";
    cin >> work_hours;

    float pay_per_hour;
    cout << "Введіть погодинну ставку працівника у грн: ";
    cin >> pay_per_hour;

    float salary = pay_per_hour * work_hours;
    cout << worker_name << " отримав зарплату: " << fixed << setprecision(2) << salary << " грн";

    return 0;
}