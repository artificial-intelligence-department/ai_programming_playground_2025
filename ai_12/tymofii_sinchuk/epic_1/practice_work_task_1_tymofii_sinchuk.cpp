#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int hours;
    double payh;
        
    cout << " Введіть ім'я працівника: " <<endl;
    cin >> name;

    cout << " Введіть кількість відпрацьованих годин: " <<endl;
    cin >> hours;

    cout << " Введіть погодинну ставку працівника: " <<endl;
    cin >> payh;

    cout << "Працівник " << name << " отримав зарплату: " <<fixed <<setprecision(2) << hours*payh << endl;
    return 0;
}