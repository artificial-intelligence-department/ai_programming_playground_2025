#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    string name;
    int hours;
    double wage;
   
    cout << "Введіть ім’я працівника, кількість годин і погодинну ставку через пробіл: ";
    cin >> name >> hours >> wage;

    double salary = hours * wage;
    
    cout << "Працівник " << name << " отримав зарплату " << fixed << setprecision(2) << salary << " грн";
    return 0;
}