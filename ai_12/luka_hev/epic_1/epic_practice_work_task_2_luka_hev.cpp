#include <iostream>

using namespace std;


int main()
{
    int nuberOfWorkingHours;
    string workerName;
    float moneyPerHour;

    cout << "Введіть ім'я працівника: ";
    cin >> workerName;
    cout << "Введіть кількість відпрацьованих годин: ";
    cin >> nuberOfWorkingHours;
    cout << "Введіть погодинну ставку: ";
    cin >> moneyPerHour;

    cout << "Заробітня плата працівника " << workerName << " становить " << (nuberOfWorkingHours*moneyPerHour) << "грн";

}